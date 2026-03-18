#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class Bureaucrat;

class Presidentialpardonform: public AForm
{
    private:
        std::string target;
    public:
        Presidentialpardonform();
        Presidentialpardonform(std::string);
        Presidentialpardonform(const Presidentialpardonform &);
        Presidentialpardonform &operator=(const Presidentialpardonform &);
        ~Presidentialpardonform();
        void    execute(Bureaucrat const &) const;
};

#endif