#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: not enough arguments" << std::endl;
        return 1;
    }

    try
    {
        std::deque<int> deq;
        std::list<int> lst;

        for (int i = 1; i < argc; ++i)
        {
            std::string token(argv[i]);

            for (size_t j = 0; j < token.size(); ++j)
            {
                if (!std::isdigit(token[j]))
                    throw std::runtime_error("Error");

                if (token[j] == ' ' && j == token.size() - 1)
                    continue;
            }

           	std::stringstream ss(token);
			int val;
			ss >> val;
			if (ss.fail() || !ss.eof())
    			throw std::runtime_error("Error");

            if (val < 0)
                throw std::runtime_error("Error");

            deq.push_back(val);
            lst.push_back(val);
        }

        std::cout << "Before:\t";
        for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        PmergeMe sorter;

        clock_t startDeque = clock();
        sorter.mergeInsertSort(deq);
        clock_t endDeque = clock();

        clock_t startList = clock();
        sorter.mergeInsertSort(lst);
        clock_t endList = clock();

        std::cout << "After:\t";
        for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::cout << "Time to process a range of " << deq.size()
                  << " elements with std::deque: "
                  << (endDeque - startDeque) / (double)CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

        std::cout << "Time to process a range of " << lst.size()
                  << " elements with std::list: "
                  << (endList - startList) / (double)CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}

