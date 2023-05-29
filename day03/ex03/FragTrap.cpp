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
 * @ Create Time: 2023-05-23 00:15:18
 */


#include "FragTrap.hpp"

/*
rule of derived classes 
before the constructor of the FragTrap constructor 
can do anything
we need to call a Clap constructor do set up the memory first
then the ST constructor can finish its job.
*/

/*
hp 100
ep 100
ad 30
*/

/*======== CONSTRUCTORS ========*/

FragTrap::FragTrap(void)
{
    std::cout << "Frag Trap Default constructor" << std::endl;
    _name = "no name";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap param constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy._name)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
}

FragTrap::FragTrap(std::string a, std::string b) : ClapTrap(a, b)
{
    std::cout << "Scav Trap second Param constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

/*++++ Overaload = operator ++++*/

FragTrap& FragTrap::operator=(const FragTrap& rhs)
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

FragTrap::~FragTrap()
{
    std::cout << "Frag Trap destructor called" << std::endl;
}

/*===============================*/

/*======== MEMBER FUNCTIONS ========*/

void    FragTrap::highFiveGuys()
{
    std::cout << "High Five Guys" << std::endl;
}


void FragTrap::attack(const std::string& target)
{
    if (_energyPoints < 0 || _hitPoints < 0)
    {
        std::cout << "Scav Trap " << _name << "can't do anything" << std::endl;
    }
    else
    {
        std::cout << "Scav Trap " << _name << " attacks " <<
            target << ", causing " 
            << _attackDamage << "points of damage" << std::endl;
        _energyPoints--;
    }
}

/*===============================*/
