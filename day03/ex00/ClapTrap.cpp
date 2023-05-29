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
 * @ Create Time: 2023-05-21 11:53:56
 */

#include "ClapTrap.hpp"

/*======== CONSTRUCTORS ========*/

ClapTrap::ClapTrap(void)
{
    std::cout << "default constructor called" << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 10;
    _name = "no name";
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    _name = copy._name;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Param constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

/*++++ Overaload = oprator ++++*/

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    this->_attackDamage = rhs._attackDamage;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_name = rhs._name;
    return (*this);
}

/*++++++++*/

/*===============================*/

/*======== DESTRUCTORS ========*/

ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor called" << std::endl;
}

/*===============================*/


/*======== MEMBER FUNCTIONS ========*/

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << "can't do anything" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " attacks " <<
            target << ", causing " 
            << _attackDamage << "points of damage" << std::endl;
        _energyPoints--;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap" << _name << " is being repaired " << std::flush;
    _hitPoints += amount;
    // std::cout << "hit points " << _hitPoints << std::endl;
    _energyPoints--;
    std::cout << "It has now " << _hitPoints << " Hit Points !!!"<< std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name <<" is taking damage " << std::flush;
    _hitPoints -= amount;
    std::cout << "It has now " << _hitPoints << " Hit Points !!!" << std::endl;
}

void    ClapTrap::displayInfo(void) const
{
    std::cout << "Clap named " << _name << " has : \n"
    << _hitPoints << " hit points\n"
    << _energyPoints << " enrgy points\n" 
    << _attackDamage << " attack damage" << std::endl;
}

/*===============================*/
