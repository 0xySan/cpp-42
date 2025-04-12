#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) { std::cout << "Bureaucrat default constructor called " << std::endl; }

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	if (grade <= 0)
		throw GradeTooLowException();
	if (grade > 150)
		throw GradeTooHighException();
	else
		std::cout << "Bureaucrat " << this->_name << " created" << std::endl;
}

Bureaucrat::~Bureaucrat() { std::cout << "Bureaucrat destructor called" << std::endl; }

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Bureaucrat copy constructor called " << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
		_grade = copy.getGrade();
	return (*this);
}

int Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

std::string const Bureaucrat::getName( void ) const
{
	return (this->_name);
}

void Bureaucrat::decrementGrade()
{
	if (getGrade() - 1 <= 0)
		throw(GradeTooLowException());
	else
		--_grade;
}

void Bureaucrat::incrementGrade()
{
	if (getGrade() + 1 > 150)
		throw(GradeTooHighException());
	else
		++_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
	return("Grade too high for the bureaucrat\n");
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
	return("Grade too low for the bureaucrat\n");
}

std::ostream &operator << (std::ostream &os, Bureaucrat& objs)
{
	os << objs.getName() << ", bureaucrat grade " << objs.getGrade() << "." << std::endl;
	return (os);
}

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName()
				  << " because " << e.what() << std::endl;
	}
}