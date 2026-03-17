#ifndef BUREAUCRAFT
#define BUREAUCRAFT

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string, int);
        Bureaucrat &operator=(Bureaucrat const &);
        Bureaucrat(Bureaucrat const &);
        ~Bureaucrat();
        std::string getName() const;
        int         getGrade() const;
        void        IncrementGrade();
        void        DecrementGrade();
        void        signForm(Form &);

    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &bureaucraft);

#endif