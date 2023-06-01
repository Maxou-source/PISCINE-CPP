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

MateriaSource::MateriaSource() : _idx(0)
{
    for (int i = 0; i < 4; i++)
    {
        _data[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    AMateria* tmp;
    for (int i = 0; i < 4; i++)
    {
        if (copy._data[i])
        {
            if (copy._data[i]->getType() == "ice")
                tmp = new Ice();
            else
                tmp = new Cure();
            _data[i] = tmp;
        }
    }
}

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
    AMateria* tmp;

    if (type == "ice")
        tmp = new Ice();
    else if (type == "cure")
        tmp = new Cure();
    else
        return ;

    _data[_idx++] = tmp;
}


/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
