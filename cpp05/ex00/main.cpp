#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Frangin("Frangin",160);
	}
	catch(std::exception &grade)
	{
		std::cout << grade.what() << std::endl;
	}
	try
	{
		Bureaucrat Frangine("Frangine", 1);
		std::cout << Frangine;
		Frangine.decrementGrade();
		std::cout << Frangine;
		Frangine.incrementGrade();
		Frangine.incrementGrade();
	} 
	catch(std::exception &grade)
	{
		std::cout << grade.what() << std::endl;
	}
	try
	{
		Bureaucrat Frero("Frero", 20);
		std::cout << Frero;
	} 
	catch(std::exception &grade)
	{
		std::cout << grade.what() << std::endl;
	}
}