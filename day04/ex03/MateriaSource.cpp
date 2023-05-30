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

/*=+=+=+=+=+=+=+=+=+=+=+=+ INTERFACE =+=+=+=+=+=+=+=+=+=+=+=+*/

IMateriaSource::IMateriaSource(void)
{
    std::cout << "Interface Materia Source constructor called" << std::endl;
    _data = NULL;
}

IMateriaSource::IMateriaSource(const IMateriaSource& rhs)
{
    std::cout << "Interface Materia Source copy constructor called" << std::endl;
}

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/


/*=+=+=+=+=+=+=+=+=+=+=+=+ MATERIA SOURCE =+=+=+=+=+=+=+=+=+=+=+=+*/

MateriaSource::MateriaSource()


/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
