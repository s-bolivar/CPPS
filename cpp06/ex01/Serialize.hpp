#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdint.h>
#include <iomanip>

struct Data
{
    std::string name;
    int age;
    std::string nickname;
}; 

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &);
        Serializer &operator=(const Serializer &);
        ~Serializer();
    public:
        static uintptr_t serialize(Data*);
        static Data* deserialize(uintptr_t);
};

#endif