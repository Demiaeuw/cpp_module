#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <list>
#include <string>
#include <cstdlib>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <algorithm>
#include <climits>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void sortAndDisplay(char** input);
	
	void mergeInsertSort(std::deque<int>& d);
	void mergeInsertSort(std::list<int>& l);
	
private:
    std::deque<int> _deque;
    std::list<int> _list;

    void parseInput(char** input);
    void checkAndFill(const std::string& str, std::deque<int>& d, std::list<int>& l);


    // Utilitaires pour les algos de tri
    void mergeSortDeque(std::deque<int>& d);
    void mergeSortList(std::list<int>& l);
};

#endif // PMERGEME_HPP
