#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename A, size_t N, typename F>
void    Iter(A (&arr)[N], size_t len, F ft)
{
    if (len == 0 || len > N)
    {
        std::cout << "Error" << std::endl;
        return ;
    }
    for (size_t i = 0; i < len; i++)
            ft(arr[i]);
}

#endif