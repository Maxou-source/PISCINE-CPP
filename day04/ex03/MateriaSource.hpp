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

#include "AMateria.hpp"

class IMateriaSource
{
    protected:
        Materia *_data;

    public:
    /*=== Constructors ===*/
        IMateriaSource();
        IMateriaSource(const IMateriaSource&);
    
    /*=== Destructors ===*/
        virtual ~IMateriaSource() {}

    /*=== Member Functions ===*/
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

/*
canonical:
-copy
-default
-assignement operator
-destructor
*/

class MateriaSource : public IMateriaSource
{
    public:
        ;
};