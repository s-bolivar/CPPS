/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:01:37 by sbolivar          #+#    #+#             */
/*   Updated: 2026/04/10 12:42:41 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &other)
{
    *this = other;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    (void) other;
    return (*this);
}

Serializer::~Serializer() {}

uintptr_t   Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data   *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
