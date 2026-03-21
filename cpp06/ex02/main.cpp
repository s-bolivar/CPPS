/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:53:48 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/21 17:33:03 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"

Base *generate(void)
{
    int i = time(NULL) % 3;

    switch(i)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        default:
            return (new C);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type A" << std::endl;
        return ;
    }
    catch (std::exception &e) {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type B" << std::endl;
        return ;
    }
    catch (std::exception &e) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type C" << std::endl;
        return ;
    }
    catch (std::exception &e) {}
}


int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
}