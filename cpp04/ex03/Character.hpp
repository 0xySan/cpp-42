#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character: public ICharacter
{
    private:
        AMateria		*_inventory[4];
        std::string		_name;
    public:
        Character();
        ~Character();
        Character( std::string );
        Character( const Character & );
        Character &operator=( const Character & );

        std::string	const	&getName() const;
        void	equip( AMateria* );
        void	unequip( int );
        void	use( int , ICharacter & );
};

#endif