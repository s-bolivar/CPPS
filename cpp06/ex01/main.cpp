/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:20:52 by sbolivar          #+#    #+#             */
/*   Updated: 2026/03/21 16:43:14 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data *data = new Data;
    data->name = "Freddy";
    data->age = 42;
    data->nickname = "Frivas";
    uintptr_t raw = Serializer::serialize(data);
    data = Serializer::deserialize(raw);
    std::cout << data->name <<std::endl;
    std::cout << data->age <<std::endl;
    std::cout << data->nickname <<std::endl;
    delete data;
}