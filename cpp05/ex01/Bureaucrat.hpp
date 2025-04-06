#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
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
		void				signForm(Form &form) const;
};

std::ostream &operator <<(std::ostream &op, Bureaucrat&);

#endif