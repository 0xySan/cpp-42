#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExecute;

	public:
		Form(std::string const &name, int gradeSign, int gradeExecute);
		Form( void );
		~Form( void );
		Form( const Form & );
		Form& operator=( const Form & );
		std::string const	getName( void ) const;
		bool				getSigned( void ) const;
		int					getGradeSign( void ) const;
		int					getGradeExecute( void ) const;
		void				beSigned(const Bureaucrat & );
		
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
};

std::ostream &operator <<(std::ostream &op, Form&);

#endif
