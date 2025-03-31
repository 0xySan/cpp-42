#include "Character.hpp"


Character::Character()
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character( std::string name ) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
            delete	_inventory[i];
}

Character::Character( const Character &copy ) { *this = copy; }

Character &Character::operator=( const Character &copy )
{
    _name = copy._name;

    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete	_inventory[i];
        copy._inventory[i] ? _inventory[i] = copy._inventory[i]->clone() : _inventory[i] = NULL;
    }
    return (*this);
}

std::string	const	&Character::getName() const
{
    return this->_name;
}

void	Character::equip( AMateria* materia)
{
    int i = 0;
    while (_inventory[i] && i < 4)
        i++;
    if (i > 3)
        std::cout << "Inventory is full" << std::endl;
    else if (materia)
        _inventory[i] = materia;
    else
        std::cout << "Item is not equipeable." << std::endl;

}

void	Character::unequip( int i )
{
    if ( i < 0 || i > 3)
        std::cout << "Can't unequip an item that is out of range." << std::endl;
    else if (_inventory[i])
        _inventory[i] = NULL;
    else
        std::cout << "Can't unequip item, there is no item in this slot.";
    
}

void	Character::use( int i, ICharacter &other )
{
    if (_inventory[i])
        _inventory[i]->use(other);
    else
        std::cout << "Can't use item at " << i << " because no item is there." << std::endl;
    
}