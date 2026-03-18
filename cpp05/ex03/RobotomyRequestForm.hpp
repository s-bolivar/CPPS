#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include <ctime>

class Bureaucrat;

class Robotomyrequestform: public AForm
{
    private:
        std::string target;
    public:
        Robotomyrequestform();
        Robotomyrequestform(std::string);
        Robotomyrequestform(const Robotomyrequestform &);
        Robotomyrequestform &operator=(const Robotomyrequestform &);
        ~Robotomyrequestform();
        void    execute(Bureaucrat const &) const;
};

#endif