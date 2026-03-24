#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename A, typename F>
void    Iter(A &arr, int len, F ft)
{
    if (len == 0)
        return ;
    for (int i = 0; i < len; i++)
        
        ft(arr[i]);
}

#endif