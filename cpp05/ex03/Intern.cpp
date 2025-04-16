#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <map>

Intern::Intern() { std::cout << "Intern default constructor called" << std::endl; }

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return *this;
}

const char* Intern::FormNotFoundException::what() const noexcept
{
	return ("Form not found\n");
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Intern::~Intern() { std::cout << "Intern destructor called" << std::endl; }

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string lowerCasedFormName;
	for (size_t i = 0; i < formName.length(); ++i)
		lowerCasedFormName += std::tolower(formName[i]);

	std::map<std::string, AForm* (Intern::*)(std::string)> forms = {
		{"shrubbery creation", &Intern::makeShrubberyCreationForm},
		{"robotomy request", &Intern::makeRobotomyRequestForm},
		{"presidential pardon", &Intern::makePresidentialPardonForm}
	};

	if (forms.find(lowerCasedFormName) != forms.end())
        return (this->*forms[lowerCasedFormName])(target);
    else
		throw FormNotFoundException();
}