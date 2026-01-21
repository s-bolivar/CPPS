/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:11:42 by sbolivar          #+#    #+#             */
/*   Updated: 2025/12/04 14:50:07 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Contacts::print_all()
{
    std::cout << "First name: " << p_first_n << "\n";
    std::cout << "Last name: " << p_last_n<< "\n";
    std::cout << "Nickname: " << p_nickname << "\n";
    std::cout << "Secret: " << p_secret << "\n";
    std::cout << "Phone: " << p_phone << "\n";
}

std::string Contacts::truncate(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contacts::ADD()
{
	do
	{
		std::cout << "first name: ";
    	std::getline(std::cin, p_first_n);
        if (std::cin.eof())
            return ;
        if (p_first_n.empty())
            continue ;
	} while (p_first_n.empty());
	do
	{
		std::cout << "last name: ";
    	std::getline(std::cin, p_last_n);
        if (std::cin.eof())
            return ;
        if (p_last_n.empty())
            continue ;
	} while (p_last_n.empty());
	do
	{
		std::cout << "nickname: ";
    	std::getline(std::cin, p_nickname);
        if (std::cin.eof())
            return ;
        if (p_nickname.empty())
            continue ;
	} while (p_nickname.empty());
	do
	{
		std::cout << "secret: ";
    	std::getline(std::cin, p_secret);
        if (std::cin.eof())
            return ;
        if (p_secret.empty())
            continue ;
	} while (p_secret.empty());
	do
	{
		std::cout << "phone: ";
    	std::getline(std::cin, p_phone);
        if (std::cin.eof())
            return ;
        if (p_phone.empty())
            continue ;
	} while (p_phone.empty());
}

void Contacts::print(int num_of_contacts)
{
    std::cout << "|" << std::setw(10) << num_of_contacts
            << "|" << std::setw(10) << truncate(p_first_n)
            << "|" << std::setw(10) << truncate(p_last_n)
            << "|" << std::setw(10) << truncate(p_nickname) << "|\n";
}

void Phonebook::addContact(const Contacts &new_contact)
{
    if (num_of_contacts <= 8)
        contact[num_of_contacts++] = new_contact;
    else
    {
        total = 8;
        num_of_contacts = 1;
        contact[num_of_contacts++] = new_contact;
    }
}

void Phonebook::listContacts()
{
    int num;
    std::cout << "+----------+----------+----------+----------+\n";
    std::cout << "|     Index| FirstName|  LastName|  NickName|\n";
    std::cout << "+----------+----------+----------+----------+\n";
    for (int i = 1; i < num_of_contacts || i <= total ; ++i)
        contact[i].print(i);
    std::cout << "+----------+----------+----------+----------+\n";
    std::cout << "Introduce the num of contact: ";
    std::cin >> num;
    if (std::cin.fail() || num <= 0 || num > num_of_contacts || isalnum(num))
    {
        std::cout << "Invalid num\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    contact[num].print_all();
}

int main()
{
    Phonebook pb;
    Contacts new_contact;
    std::string input;
    while (true)
    {
        std::cout << "Introduce command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "Exit...\n";
            break;
        }
        if (input.empty())
            continue ;
        if (input == "ADD")
        {
            new_contact.ADD();
            pb.addContact(new_contact);
        }
        else if (input == "SEARCH")
            pb.listContacts();
        else if (input == "EXIT")
        {
            std::cout << "Exit...\n";
            break;
        }
        else
            std::cout << "Command not found. Use ADD, SEARCH or EXIT.\n";
    }
    return 0;
}
