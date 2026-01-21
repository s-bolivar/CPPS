#ifndef CPP00_H
#define CPP00_H

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

class Contacts
{
public:
    Contacts() {}
    std::string truncate(const std::string &str);
    void print_all();
    void ADD();
    void print(int num_of_contacts);

private:
    std::string p_first_n;
    std::string p_last_n;
    std::string p_nickname;
    std::string p_secret;
    std::string p_phone;
};

class Phonebook
{
public:
    Phonebook() : num_of_contacts(1), total(0) {}
    void addContact(const Contacts &new_contact);
    void listContacts();

private:
    Contacts contact[9];
    int num_of_contacts;
    int total;
};

#endif