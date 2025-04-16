#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( const Bureaucrat & );
		Bureaucrat& operator=( const Bureaucrat & );
		std::string const	getName( void ) const;
		int					getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const noexcept override;
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const noexcept override;
		};
		void				signForm(AForm &form) const;
		void				executeForm(AForm const &form) const;
};

std::ostream &operator <<(std::ostream &op, Bureaucrat&);

#endif