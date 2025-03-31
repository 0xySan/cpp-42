
#include "Ice.hpp"

Ice::Ice() : AMateria() { _type = "ice"; }

Ice::Ice( const Ice &copy ) { *this = copy; }

Ice::~Ice() {}

Ice &Ice::operator = ( const Ice &copy )
{
    _type = copy._type;
    return (*this);
}

AMateria    *Ice::clone() const
{
    AMateria    *temp = new Ice(*this);
    return (temp);
}

void    Ice::use( ICharacter &target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}