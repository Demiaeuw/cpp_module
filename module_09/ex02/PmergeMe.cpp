#include "PmergeMe.hpp"



// ----------------- Canonical Form -----------------

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		this->_deque = other._deque;
		this->_list = other._list;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

// ----------------- Public Method -----------------

void PmergeMe::sortAndDisplay(char** input) {
	parseInput(input);

	std::cout << "Before:\t";
	for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	clock_t startDeque = clock();
	mergeInsertSort(_deque);
	clock_t endDeque = clock();

	clock_t startList = clock();
	mergeInsertSort(_list);
	clock_t endList = clock();

	std::cout << "After:\t";
	for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	double timeDeque = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1e6;
	double timeList = static_cast<double>(endList - startList) / CLOCKS_PER_SEC * 1e6;

	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << timeDeque << " us" << std::endl;
	std::cout << "Time to process a range of " << _list.size() << " elements with std::list  : " << timeList << " us" << std::endl;
}

// ----------------- Private Methods -----------------

void PmergeMe::parseInput(char** input) {
	for (int i = 1; input[i]; ++i)
		checkAndFill(input[i], _deque, _list);
}

void PmergeMe::checkAndFill(const std::string& str, std::deque<int>& d, std::list<int>& l) {
	std::istringstream iss(str);
	std::string token;
	while (iss >> token) {
		for (size_t i = 0; i < token.size(); ++i) {
			if (!isdigit(token[i]))
				throw std::runtime_error("Error: invalid input (non-digit character)");
		}
		long n = std::strtol(token.c_str(), NULL, 10);
		if (n < 0 || n > INT_MAX)
			throw std::runtime_error("Error: invalid number range");
		d.push_back(static_cast<int>(n));
		l.push_back(static_cast<int>(n));
	}
}

void PmergeMe::mergeInsertSort(std::deque<int>& d) {
	mergeSortDeque(d);
}

void PmergeMe::mergeInsertSort(std::list<int>& l) {
	mergeSortList(l);
}

// Tri récursif pour deque
void PmergeMe::mergeSortDeque(std::deque<int>& d) {
	if (d.size() <= 1)
		return;

	std::deque<int>::iterator mid = d.begin() + d.size() / 2;
	std::deque<int> left(d.begin(), mid);
	std::deque<int> right(mid, d.end());

	mergeSortDeque(left);
	mergeSortDeque(right);

	d.clear();
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(d));
}

// Tri récursif pour list
void PmergeMe::mergeSortList(std::list<int>& l) {
	if (l.size() <= 1)
		return;

	std::list<int>::iterator mid = l.begin();
	std::advance(mid, l.size() / 2);
	std::list<int> left(l.begin(), mid);
	std::list<int> right(mid, l.end());

	mergeSortList(left);
	mergeSortList(right);

	l.clear();
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(l));
}
