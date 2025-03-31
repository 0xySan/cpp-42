#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice ( const Ice & );
        Ice &operator=( const Ice & );

        AMateria *clone() const;
        void	use( ICharacter & );
};

#endif
