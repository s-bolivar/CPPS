#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

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
};

#endif