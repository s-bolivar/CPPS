#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <limits>

enum
{
    BAD_INPUT = 1,
    NEGATIVE,
    LARGE,
    BAD_DATE
};

class   BitcoinExchange
{
    private:
        float   value;
        int     error;
        std::string line;
        std::map<std::string, float> data;
        std::map<std::string, float>::iterator it;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &);
        BitcoinExchange &operator=(const BitcoinExchange &);
        ~BitcoinExchange();
        std::string getLine() const;
        void    readFileToLine(std::istream &);
        int     getError() const;
        void    print_error();
        void    parser();
        float   exchange();
};

int date_parser(std::string);

#endif