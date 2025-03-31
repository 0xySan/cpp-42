
#include "Cure.hpp"

Cure::Cure() : AMateria() { _type = "cure"; }

Cure::Cure( const Cure &copy ) { *this = copy; }

Cure::~Cure() {}

Cure	&Cure::operator = ( const Cure &copy )
{
    _type = copy._type;
    return (*this);
}

AMateria	*Cure::clone() const
{
    AMateria		*temp = new Cure(*this);
    return (temp);
}

void	Cure::use( ICharacter	&target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}