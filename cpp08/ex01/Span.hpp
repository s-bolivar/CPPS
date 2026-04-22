#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <cstdlib>

class Span
{
    private:
        std::vector<int> cont;
        unsigned int N;
        unsigned int it;
    public:
        Span();
        Span(int);
        Span(const Span &);
        Span    &operator=(const Span &);
        ~Span();
        void    addRange(int);
        void    addNumber(int);
        int     shortestSpan();
        int     longestSpan();
    class OverflowException: public std::exception
    {
        public:
            const char *what() const throw()
            {
                return ("Overflow detected");
            }
    };
};

#endif