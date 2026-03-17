#ifndef AFORM
#define AFORM

#include "Bureaucraft.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   name;
        const int           sign_it;
        const int           execute_it;
        bool                comp;
    public:
        AForm();
        AForm(std::string, int, int);
        AForm &operator=(AForm const &);
        AForm(AForm const &);
        ~AForm();
		void		    beSigned(Bureaucrat &);
		std::string     getName() const;
		int			    getSign_it() const;
		int			    getExecute_it() const;
        virtual void    execute(Bureaucrat const &) const = 0;

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

std::ostream&	operator<<(std::ostream &o, AForm const &AForm);

#endif