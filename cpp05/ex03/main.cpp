#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main()
{
	Intern		intern;
	Bureaucrat		B("monkey", 40);

	try {
		AForm *form1 = intern.makeForm("shrubbery creation", "Home");
		form1->beSigned(B);
		form1->execute(B);
		delete form1;
	}
	catch ( const std::exception &e )
	{
		std::cout << e.what();
	}
}