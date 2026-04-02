#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <cstdlib>

class RPN
{
    private:
        std::stack<int>     stack;
    public:
        RPN();
        RPN(const RPN &);
        RPN &operator=(const RPN &);
        ~RPN();
        void    get_res(std::string *, int len);
};

int is_digit_str(std::string);
int count_args(std::string op);

#endif