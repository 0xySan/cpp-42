#include "Form.hpp"

int main()
{
	try
	{
		// Create a Bureaucrat with a valid grade
		Bureaucrat john("John", 51);
		std::cout << john << std::endl;

		// Create a Form with valid grades
		Form contract("Contract", 50, 25);
		std::cout << contract << std::endl;

		// Try to sign the form
		john.signForm(contract);
		std::cout << contract << std::endl;

		// Create a Bureaucrat with a high grade
		Bureaucrat alice("Alice", 2);
		std::cout << alice << std::endl;

		// Try to sign the form with a higher-ranked Bureaucrat
		alice.signForm(contract);
		std::cout << contract << std::endl;

		Form contract2("Contract2", 125, 25);
		Form Contract3("Contract3", 1, 25);
		alice.signForm(contract2);

		alice.signForm(Contract3);

		// Create a Bureaucrat with an invalid grade (too low)
		Bureaucrat invalid("Invalid", 151);
		std::cout << invalid << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		// Create a Form with invalid grades
		Form invalidForm("InvalidForm", 0, 200);
		std::cout << invalidForm << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}