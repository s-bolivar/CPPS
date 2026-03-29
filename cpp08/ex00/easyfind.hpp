#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <cstdlib>

class NotParamaterFound: public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("Second paramater dont found");
        }
};

#include "easyfind.tpp"

#endif