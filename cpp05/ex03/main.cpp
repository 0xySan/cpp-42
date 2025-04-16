#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main()
{
	Bureaucrat		B("monkey", 40);
	ShrubberyCreationForm	s("Home");
	try {
		s.beSigned(B);
		s.execute(B);
	}
	catch ( const std::exception &e )
	{
		std::cout << e.what();
	}


	PresidentialPardonForm	p("berber");
	try {
		p.beSigned(B);
		p.execute(B);
	}
	catch ( const std::exception &e )
	{
		std::cout << e.what();
	}


	RobotomyRequestForm		r("xvf");
	try {
		r.beSigned(B);
		r.execute(B);
	}
	catch ( const std::exception &e )
	{
		std::cout << e.what();
	}

	std::cout << s;
	std::cout << p;
	std::cout << r;
}