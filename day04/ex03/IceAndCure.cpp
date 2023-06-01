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
 * @ Create Time: 2023-05-29 01:23:25
 */

#include "IceAndCure.hpp"
#include "Characters.hpp"

/*=+=+=+=+=+=+=+=+=+=+=+=+ ICE =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/

Ice::Ice(void)  
{
    std::cout << "ICE construcor called" << std::endl;
    _type = "ice";
}

Ice::Ice(const Ice& rhs) : AMateria(rhs)
{
    std::cout << "ICE copy constructor called" << std::endl;
}

Ice::~Ice() {}
/*===============================*/

/*======== GETTERS ========*/
std::string const & Ice::getType() const { return AMateria::getType(); }
/*===============================*/

/*======== MEMBERS CONSTRUCTORS ========*/

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria* tmp = new Ice;

    tmp->setType(this->getType());
    return (tmp);
}
/*===============================*/

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/

/*=+=+=+=+=+=+=+=+=+=+=+=+ CURE =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/

Cure::Cure(void)
{
    std::cout << "Cure construcor called" << std::endl;
    _type = "cure";
}

Cure::Cure(const Cure& rhs) : AMateria(rhs)
{
    std::cout << "CURE copy constructor called" << std::endl;
}
Cure::~Cure() {}

/*======== GETTERS ========*/
std::string const & Cure::getType() const { return AMateria::getType(); }
/*===============================*/

/*======== MEMBERS CONSTRUCTORS ========*/

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria* tmp = new Ice;

    tmp->setType(this->getType());
    return (tmp);
}
/*===============================*/

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
