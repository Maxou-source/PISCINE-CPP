/* 
$$      $$\ 
$$$\    $$$ |
$$$$\  $$$$ | $$$$$$\  $$\   $$\  $$$$$$\  $$\   $$\ 
$$\$$\$$ $$ | \____$$\ \$$\ $$  |$$  __$$\ $$ |  $$ |
$$ \$$$  $$ | $$$$$$$ | \$$$$  / $$ /  $$ |$$ |  $$ |
$$ |\$  /$$ |$$  __$$ | $$  $$<  $$ |  $$ |$$ |  $$ |
$$ | \_/ $$ |\$$$$$$$ |$$  /\$$\ \$$$$$$  |\$$$$$$  |
\__|     \__| \_______|\__/  \__| \______/  \______/

 * @ Author: Maxou
 * @ Create Time: 1970-01-01 01:00:00
 */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IceAndCure.hpp"

/*=+=+=+=+=+=+=+=+=+=+=+=+ MATERIA SOURCE =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/

MateriaSource::MateriaSource() : _idx(0)
{
    for (int i = 0; i < 4; i++)
    {
        _data[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._data[i])
        {
            _data[i] = copy._data[i]->clone();
        }
    }
}

MateriaSource::~MateriaSource(){};

/*===============================*/

/*======== MEMBERS FUNCTIONS ========*/
AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice")
        return (new Ice());
    else if (type == "cure")
        return (new Cure());
    return 0;
}

void MateriaSource::learnMateria(AMateria *tmp)
{
    if (_idx > 4)
    {
        std::cout << "Do nothing !!" << std::endl;
        return ;
    }
    _data[_idx++] = tmp->clone();
}
/*===============================*/


/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
