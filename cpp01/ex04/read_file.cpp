/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:07:35 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/21 13:02:34 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	read_file(std::string file, std::string s1, std::string s2)
{
	std::string		text;
	std::ifstream	infile(file.c_str()); // abre el archivo para la lectura del mismo (se usa c_str para pasar a char, ya que solo acepta char)
	if (!infile.is_open())
	{
		std::cout << "file error" << std::endl;
		return ;
	}
	std::getline(infile, text, '\0'); // lee la clase de la libreria iostream, la variable en la que lo guardara y el caracter hasta donde leerla
	if (!s1.c_str() || !s2.c_str())
		return ;
	for (size_t pos = text.find(s1); pos != std::string::npos; pos = text.find(s1)) // si no lo encuentra, pos sera igual a npos
		text = text.substr(0, pos) + s2 + text.substr(pos + s2.length());
	std::ofstream	new_file("replace.txt"); // crea un archivo con el nombre que se el asigne
	if (text.empty())
	{
		new_file.close();
		return ;
	}
	new_file << text; // le pasa la informacion al archivo de text
	new_file.close();
}
