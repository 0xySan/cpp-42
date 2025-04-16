#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern( const Intern &copy );
        Intern& operator=( const Intern &copy );
        ~Intern();

        AForm* makeShrubberyCreationForm(std::string target);
        AForm* makeRobotomyRequestForm(std::string target);
        AForm* makePresidentialPardonForm(std::string target);

        AForm* makeForm(std::string formName, std::string target);
        
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char* what() const noexcept override;
        };
};

#endif