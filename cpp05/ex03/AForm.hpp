#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExecute;

	public:
		AForm(std::string const &name, int gradeSign, int gradeExecute);
		AForm( void );
		virtual ~AForm( void );
		AForm( const AForm & );
		AForm& operator=( const AForm & );
		std::string const	getName( void ) const;
		bool				getSigned( void ) const;
		int					getGradeSign( void ) const;
		int					getGradeExecute( void ) const;
		void				beSigned(const Bureaucrat & );
		void				execute(Bureaucrat const &executor) const;
		
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

std::ostream &operator <<(std::ostream &op, AForm&);

#endif
