#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <stdexcept>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <time.h>
#include <iomanip>
#include <cctype>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void   parseInput(int argc, char** argv);
    void   sort();
    void   display() const;

    double getVecTime() const;
    double getDeqTime() const;

private:
    std::vector<int> _vec;
    std::deque<int>  _deq;
    double           _vecTime;
    double           _deqTime;
    void             fordJohnsonVector(std::vector<int>& arr);
    std::vector<int> mergeInsertSortVector(std::vector<int>& arr);
    void             binaryInsertVector(std::vector<int>& sorted, int value);
    void            fordJohnsonDeque(std::deque<int>& arr);
    std::deque<int> mergeInsertSortDeque(std::deque<int>& arr);
    void            binaryInsertDeque(std::deque<int>& sorted, int value);
};

#endif