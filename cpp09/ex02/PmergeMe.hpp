#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <unistd.h>
#include <deque>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sys/time.h>

class PmergeMe
{
    private:
        timeval dstart;
        timeval dend;
        double dduration;
        timeval vstart;
        timeval vend;
        double vduration;
        std::deque<int>     first;
        std::vector<int>    second;
        std::deque<int>::iterator   dit;
        std::vector<int>::iterator  vit;
    public:
        PmergeMe();
        PmergeMe(char **, int);
        PmergeMe(const PmergeMe &);
        PmergeMe    &operator=(const PmergeMe &);
        ~PmergeMe();
        void    organize();
        void    printSecond() const;
        void    printDurations() const;
};

#endif