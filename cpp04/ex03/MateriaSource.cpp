#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
	        _known_materias[i] = "";
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
	        delete _inventory[i];
}

MateriaSource::MateriaSource( const MateriaSource &copy ) { *this = copy; }

MateriaSource	&MateriaSource::operator = ( const MateriaSource &copy )
{
    for (int i = 0; i < 4; i++)
        copy._inventory[i] ? _inventory[i] = copy._inventory[i] : _inventory[i] = NULL;
    return (*this);
}

int	MateriaSource::sizeof_str( std::string s, char end )
{
    int i = 0;
    while (s[i] && s[i] != end)
        i++;
    return (i);
}

void	MateriaSource::learnMateria( AMateria *materia )
{
    int	i = 0;
    while (_inventory[i] && i<4)
        i++;
    if (i > 3)
        std::cout << "Learned too many materias. You can only learn 4." << std::endl;
    else if (materia)
    {
        _inventory[i] = materia;
        _known_materias[i] = materia->getType();
    }
    else
        std::cout << "not a valid materia" << std::endl;
}

AMateria	*MateriaSource::createMateria( std::string	const &type )
{
    for (int i = 0; i < 4; i++)
        if (!type.compare(_known_materias[i]))
            return (_inventory[i]->clone());
    return (0);
}