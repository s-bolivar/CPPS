/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 14:58:57 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/03 01:48:13 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        stack = other.stack;
    }
    return (*this);
}

RPN::~RPN() {}

int count_args(std::string op)
{
    int args = 1;
    for (size_t i = 0; i < op.size(); i++)
    {
        if (op[i] == ' ')
        {
            i++;
            args++;
        }
    }
    return (args);
}

int is_digit_str(std::string    nums)
{
    size_t i = 0;
    if (nums[i] == '+' || nums[i] == '-' )
        i++;
    if (i == nums.size())
        return (0);
    while (i < nums.size())
    {
        if (!isdigit(nums[i]))
            return (0);
        i++;
    }
    return (1);
}

void    RPN::get_res(std::string    *temp, int len)
{ 
    for (int i = 0; i < len; i++)
    {
        while (is_digit_str(temp[i]) != 0)
        {
            stack.push(atoi(temp[i].c_str()));
            i++;
        }
        if (temp[i][0] == '+')
        {
            int num = stack.top();
            stack.pop();
            int res = stack.top() + num;
            stack.pop();
            stack.push(res);
        }
        else if (temp[i][0] == '-')
        {
            int num = stack.top();
            stack.pop();
            int res = stack.top() - num;
            stack.pop();
            stack.push(res);
        }
        else if (temp[i][0] == '*')
        {
            int num = stack.top();
            stack.pop();
            int res = stack.top() * num;
            stack.pop();
            stack.push(res);
        }
        else if (temp[i][0] == '/')
        {
            int num = stack.top();
            stack.pop();
            int res = stack.top() / num;
            stack.pop();
            stack.push(res);
        }
    }
    std::cout << stack.top() << std::endl;
}
