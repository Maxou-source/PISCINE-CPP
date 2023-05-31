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
/*===============================*/

/*======== GETTERS ========*/
std::string const & Ice::getType() const { return AMateria::getType(); }
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

/*======== GETTERS ========*/
std::string const & Cure::getType() const { return AMateria::getType(); }
/*===============================*/

// void Cure::use(ICharacter& target)
// {
    
// }


/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
