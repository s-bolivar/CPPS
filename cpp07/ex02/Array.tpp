/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:48:52 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/24 22:03:32 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(NULL), arr_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]), arr_size(n) {}

template <typename T>
Array<T>::Array(Array const &copy) : arr(new T[copy.arr_size]), arr_size(copy.arr_size)
{
	for (unsigned int i = 0; i < arr_size; i++)
		arr[i] = copy.arr[i];
}

template <typename T>
Array<T>::~Array()
{
	delete [] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (this != &copy)
	{
		delete [] arr;
		arr_size = copy.arr_size;
		arr = new T[arr_size];
		for (unsigned int i = 0; i < arr_size; i++)
			arr[i] = copy.arr[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= arr_size)
		throw IndexException();
	return (arr[i]);
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (i >= arr_size)
		throw IndexException();
	return (arr[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (arr_size);
}

template <typename T>
const char *Array<T>::IndexException::what() const throw()
{
	return ("Index out of bounds");
}