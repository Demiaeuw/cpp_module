#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <stdexcept>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>

class RPN {
public:
    RPN(void);
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
    ~RPN(void);

    int evaluate(const std::string& expression);

private:
    std::stack<int> _stack;

    void applyOperator(char op);
};

#endif
