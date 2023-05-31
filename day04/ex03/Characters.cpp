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
 * @ Create Time: 2023-05-31 20:02:15
 */

#include "Characters.hpp"

/*=+=+=+=+=+=+=+=+=+=+=+=+ I. CHARACTERS =+=+=+=+=+=+=+=+=+=+=+=+*/
// ICharacter::~ICharacter(){/*std::cout<<"ICHARACTER destructor called"<<std::endl;*/}
/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/


/*=+=+=+=+=+=+=+=+=+=+=+=+ CHARACTERS =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/
Character::Character() {std::cout<<"CHARACTER constructor called"<<std::endl;}
Character::Character(std::string name) : _name(name) {}

Character::Character(const Character& copy)
{
    this->_name = copy._name;
    /*not done we need a profound copy*/
}

std::string const & Character::getName(void) const
{
    return _name;
}

/*======== MEMBERS FUNCTIONS ========*/

void Character::equip(AMateria* m)
{
    (void) m;
}

void Character::unequip(int idx)
{
    (void) idx;
}
void    Character::use(int idx, ICharacter& target)
{
    (void) target;
    (void) inventory;
    (void) idx;
    (void) this->idx;
}

/*===============================*/

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
