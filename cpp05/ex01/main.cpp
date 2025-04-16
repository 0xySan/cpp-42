#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat john("John", 49);
		std::cout << john << std::endl;

		Form contract("Contract", 50, 25);
		std::cout << contract << std::endl;

		john.signForm(contract);
		std::cout << contract << std::endl;

		Bureaucrat alice("Alice", 2);
		std::cout << alice << std::endl;

		alice.signForm(contract);
		std::cout << contract << std::endl;

		Form contract2("Contract2", 125, 25);
		Form Contract3("Contract3", 1, 25);
		alice.signForm(contract2);

		alice.signForm(Contract3);

		Bureaucrat invalid("Invalid", 151);
		std::cout << invalid << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form invalidForm("InvalidForm", 0, 200);
		std::cout << invalidForm << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}