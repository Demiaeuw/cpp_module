#include "RPN.hpp"

// ----------------- Canonical Form -----------------

RPN::RPN(void) {}

RPN::RPN(const RPN& other) {
    *this = other;
}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        this->_stack = other._stack;
    }
    return *this;
}

RPN::~RPN(void) {}

// ----------------- Public Method -----------------

int RPN::evaluate(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token.length() == 1 && std::string("+-*/").find(token) != std::string::npos) {
            applyOperator(token[0]);
        } else {
            char* end;
            long value = std::strtol(token.c_str(), &end, 10);
            if (*end != '\0' || value > INT_MAX || value < INT_MIN) {
                throw std::runtime_error("Invalid token: " + token);
            }
            _stack.push(static_cast<int>(value));
        }
    }

    if (_stack.size() != 1) {
        throw std::runtime_error("Invalid expression: leftover operands");
    }

    return _stack.top();
}

// ----------------- Private Method -----------------

void RPN::applyOperator(char op) {
    if (_stack.size() < 2) {
        throw std::runtime_error("Not enough operands for operator");
    }

    int b = _stack.top(); _stack.pop();
    int a = _stack.top(); _stack.pop();
    int result;

    switch (op) {
        case '+':
            if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b))
                throw std::overflow_error("Addition overflow");
            result = a + b;
            break;
        case '-':
            if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b))
                throw std::overflow_error("Subtraction overflow");
            result = a - b;
            break;
        case '*':
            if ((a > 0 && b > 0 && a > INT_MAX / b) ||
                (a > 0 && b < 0 && b < INT_MIN / a) ||
                (a < 0 && b > 0 && a < INT_MIN / b) ||
                (a < 0 && b < 0 && a < INT_MAX / b))
                throw std::overflow_error("Multiplication overflow");
            result = a * b;
            break;
        case '/':
            if (b == 0)
                throw std::runtime_error("Division by zero");
            result = a / b;
            break;
        default:
            throw std::runtime_error("Unknown operator");
    }

    _stack.push(result);
}