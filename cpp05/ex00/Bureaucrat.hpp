#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <cctype>
#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>

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