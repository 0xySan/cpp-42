#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _gradeSign(150), _gradeExecute(150) { std::cout << "Form default constructor called " << std::endl; }

AForm::AForm(std::string const &name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign <= 0 || gradeExecute <= 0)
		throw GradeTooLowException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooHighException();
	else
		std::cout << "Form " << this->_name << " created" << std::endl;
}

AForm::~AForm() { std::cout << "Form destructor called" << std::endl; }

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute) { std::cout << "Form copy constructor called " << std::endl; }

AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
		_signed = copy.getSigned();
	return (*this);
}

std::string const AForm::getName( void ) const { return (this->_name); }

bool AForm::getSigned( void ) const { return (this->_signed); }

int AForm::getGradeSign( void ) const { return (this->_gradeSign); }

int AForm::getGradeExecute( void ) const { return (this->_gradeExecute); }

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed)
		throw std::runtime_error("the Form is already signed");
	if (bureaucrat.getGrade() < getGradeSign())
		throw GradeTooLowException();
	_signed = true;
}

const char* AForm::GradeTooHighException::what() const noexcept { return("Grade too high for the form"); }

const char* AForm::GradeTooLowException::what() const noexcept { return("Grade too low for the form"); }

std::ostream &operator<<(std::ostream &op, AForm &form)
{
	op << "Form name: " << form.getName() << std::endl;
	op << "Form signed: " << form.getSigned() << std::endl;
	op << "Form grade sign: " << form.getGradeSign() << std::endl;
	op << "Form grade execute: " << form.getGradeExecute() << std::endl;
	return (op);
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw std::runtime_error("the Form is not signed");
	if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
}
