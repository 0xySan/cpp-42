#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("Default") {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    if (this != &copy) {
        AForm::operator=(copy);
        _target = copy._target;
    }
    std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!getSigned())
        throw std::runtime_error("the Form is not signed");
    if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
    
    std::ofstream file(_target + "_shrubbery");
    if (!file.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return;
    }
    
    for (int i = 0; i < 3; ++i) {
        file << "       ccee88oo\n"
             << "  C8O8O8Q8PoOb o8oo\n"
             << " dOB69QO8PdUOpugoO9bD\n"
             << "CgggbU8OU qOp qOdoUOdcb\n"
             << "    6OuU  /p u gcoUodpP\n"
             << "      \\\\//  /douUP\n"
             << "        \\\\////\n"
             << "         |||/\\\n"
             << "         |||\\/\n"
             << "         |||||\n"
             << "   .....//||||\\....\n\n";
    }

    file.close();
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &form) {
    out << "ShrubberyCreationForm: " << form.getName() << ", Target: " << form.getTarget() << ", Signed: " << form.getSigned()
        << ", Grade to sign: " << form.getGradeSign() << ", Grade to execute: " << form.getGradeExecute();
    return out;
}