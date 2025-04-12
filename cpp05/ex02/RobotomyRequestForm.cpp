#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("Default") {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    if (this != &copy) {
        AForm::operator=(copy);
        _target = copy._target;
    }
    std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!getSigned())
        throw std::runtime_error("the Form is not signed");
    if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
    std::cout << "Bzzzzzz... " << _target << " has been robotomized successfully." << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
    return _target;
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &form) {
    out << "RobotomyRequestForm: " << form.getName() << ", Target: " << form.getTarget() << ", Signed: " << form.getSigned()
        << ", Grade to sign: " << form.getGradeSign() << ", Grade to execute: " << form.getGradeExecute() << std::endl;
    return out;
}