#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure ( const Cure & );
        Cure &operator=( const Cure & );

        AMateria *clone() const;
        void	use( ICharacter & );
};

#endif
