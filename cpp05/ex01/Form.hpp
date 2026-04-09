#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        const int           sign_it;
        const int           execute_it;
        bool                comp;
    public:
        Form();
        Form(std::string, int, int);
        Form &operator=(Form const &);
        Form(Form const &);
        ~Form();
		void		beSigned(Bureaucrat &);
		std::string getName() const;
		int			getSign_it() const;
		int			getExecute_it() const;

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

std::ostream&	operator<<(std::ostream &o, Form const &form);

#endif