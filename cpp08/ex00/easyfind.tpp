/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:14:40 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/28 16:21:34 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
std::vector<int>::iterator easyfind(T &container, int n)
{
    for (std::vector<int>::iterator i = container.begin(); i < container.end(); i++)
    {
        if (*i == n)
            return (i);
    }
    throw NotParamaterFound();
}