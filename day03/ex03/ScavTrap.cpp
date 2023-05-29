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
 * @ Create Time: 2023-05-23 00:16:56
 */



#include "ScavTrap.hpp"

/*
rule of derived classes 
before the constructor of the ScavTrap constructor 
can do anything
we need to call a Clap constructor do set up the memory first
then the ST constructor can finish its job.
*/

/*======== CONSTRUCTORS ========*/

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    _name = "no name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;   
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap param constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy._name)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
}

ScavTrap::ScavTrap(std::string a, std::string b) : ClapTrap(a, b)
{
    std::cout << "Scav Trap second Param constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

/*++++ Overaload = operator ++++*/

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
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

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Trap destructor called" << std::endl;
}

/*===============================*/

/*======== MEMBER FUNCTIONS ========*/

void    ScavTrap::guardGate()
{
    std::cout << "Scav Trap" << getName() << "is now in Gate Keeper mode"
              << std::endl;
}


void ScavTrap::attack(const std::string& target)
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
