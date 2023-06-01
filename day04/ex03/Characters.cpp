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
#include "AMateria.hpp"
#include "IceAndCure.hpp"

/*=+=+=+=+=+=+=+=+=+=+=+=+ CHARACTERS =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/
Character::Character()
{
    std::cout<<"CHARACTER constructor called"<<std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    garbage = 0;
}

Character::Character(std::string name) : _idx(0), _name(name)
{
    std::cout<<"CHARACTER param constructor called"<<std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    garbage = 0;
}

Character::Character(const Character& copy)
{
    AMateria *tmp;
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
    {
        if (copy._inventory[i])
        {
            if (copy._inventory[i]->getType() == "ice")
                tmp = new Ice();
            else
                tmp = new Cure();
            _inventory[i] = tmp;
        }
    }
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    t_garbage *tmp;

    while (first)
    {
        tmp = first;
        first = first->next;
        delete tmp->item;
    }
}

/*======== MEMBERS FUNCTIONS ========*/

void Character::equip(AMateria* m)
{
    if (_idx > 3)
    {
        std::cout << "do nothing" << std::endl;
        return ;
    }
    _inventory[_idx++] = m;
}

void Character::unequip(int idx)
{
    if (!(idx >= 0 && idx <= 3))
    {
        std::cout << "Not a correct index !!" << std::endl;
        return ;
    }
    else if (_inventory[_idx] == 0)
    {
        std::cout << "Nothing there !!" << std::endl;
        return ;
    }
    else
    {
        t_garbage *tmp;
        tmp = new t_garbage;
        tmp->item = _inventory[idx];
        tmp->next = 0;

        if (!garbage)
        {
            garbage = tmp;
            first = tmp;
        }
        else
            garbage->next = tmp;

        _inventory[idx] = 0;
    }
}
void    Character::use(int idx, ICharacter& target)
{
    if (!(idx >= 0 && idx <= 3) || !_inventory[idx])
    {
        std::cout << "Nothing to do" << std::endl;
        return ;
    }
    _inventory[idx]->use(target);
}
/*===============================*/

/*======== GETTERS ========*/
std::string const & Character::getName(void) const
{
    return _name;
}
/*===============================*/

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
