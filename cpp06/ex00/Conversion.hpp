#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>
#include <iomanip>
#include <climits>
#include <limits>

enum types
{
    VOID,
    CHAR,
    INT,
    DOUBLE,
    FLOAT,
    SPECIAL
};

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter  &operator=(const ScalarConverter &);
        ~ScalarConverter();
    public:
        static void convert(const std::string &);
    class OverflowExeption: public std::exception
    {
        public:
            const char *what() const throw();
    };
};

#endif