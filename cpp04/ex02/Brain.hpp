#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string Ideas[100];
    public:
        Brain();
        Brain(Brain const &);
        Brain &operator=(Brain const &);
        ~Brain();
        std::string getIdea(int);
        void setIdea(int, std::string);
};

#endif