/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:02:37 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/03 01:23:06 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool    parser(std::string op)
{
    int nums = 0;
    int operators = 0;
    if (!isdigit(op[0]))
            return (false);
    for(size_t i = 0; i < op.size(); i++)
    {
        if ((op[i] == '-' || op[i] == '+') && isdigit(op[i + 1]))
            i++;
        if (isdigit(op[i]))
        {
            while (isdigit(op[i]))
                i++;
            nums++;
        }
        else
        {
            if (op[i] == '+' || op[i] == '-' || op[i] == '*' || op[i] == '/')
            {
                operators++;
                i++;    
            }
            else
                return (false);
        }
    }
    if (nums > 10 || (operators + 1) != nums || isdigit(op[op.size() - 1]))
        return (false);
    return (true);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error" <<std::endl;
        return (1);
    }
    std::string op = av[1];
    if (parser(op))
    {
        std::istringstream iss(op);
        std::string *temp = new std::string[count_args(op)];
        RPN res;
        int i = 0;
        while (iss >> temp[i])       
            i++;
        res.get_res(temp, count_args(op));
        delete[] temp;
    }
    else
    {
        std::cout << "Error" <<std::endl;
        return (1);
    }
    return (0);
}