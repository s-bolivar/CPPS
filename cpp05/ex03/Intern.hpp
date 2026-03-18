#ifndef INTERN
#define INTERN

#include "Bureaucraft.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(const Intern &);
        Intern &operator=(const Intern &);
        ~Intern();
        AForm *makeForm(std::string, std::string);
    class NoExistingForm: public std::exception
    {
        public:
            const char *what() const throw();
    };
};

#endif