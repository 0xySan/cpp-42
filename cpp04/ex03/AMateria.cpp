#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

void    AMateria::use(ICharacter &target) { (void)target; }

AMateria::AMateria( const AMateria &copy ) { *this = copy; }

AMateria	&AMateria::operator = ( const AMateria &copy )
{
    _type = copy._type;
    return (*this);
}

AMateria::AMateria( std::string	const &type ) : _type(type) {}

std::string const &AMateria::getType() const { return (_type); }