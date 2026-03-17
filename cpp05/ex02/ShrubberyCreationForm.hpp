#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
#include <fstream>

class Bureaucrat;

class Shrubberycreationform: public AForm
{
    private:
        std::string target;
    public:
        Shrubberycreationform();
        Shrubberycreationform(std::string);
        Shrubberycreationform(const Shrubberycreationform &);
        Shrubberycreationform &operator=(const Shrubberycreationform &);
        ~Shrubberycreationform();
        void    execute(Bureaucrat const &) const;
};

#endif