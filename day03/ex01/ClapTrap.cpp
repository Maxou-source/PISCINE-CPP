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
 * @ Create Time: 2023-05-21 23:17:03
 */


/*
    HP -> 100
    EP -> 50
    AD -> 20
*/

#include "ClapTrap.hpp"

/*======== CONSTRUCTORS ========*/

ClapTrap::ClapTrap(void)
{
    std::cout << "Clap default constructor called" << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Param constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    _name = copy._name;
}

ClapTrap::ClapTrap(std::string name, std::string  type)
{
    _name = name;
    std::cout << "ClapTrap Param constructor called" << std::endl;
    if (type == "Scav")
    {
        _hitPoints = 100;
        _energyPoints = 50;
        _attackDamage = 20;
        return ;
    }
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

/*++++ Overaload = operator ++++*/

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
    if (_energyPoints < 0 || _hitPoints < 0)
    {
        std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " attacks " <<
            target << ", causing " 
            << _attackDamage << " points of damage" << std::endl;
        _energyPoints--;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints < 0 || _hitPoints < 0)
    {
        std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
    }
    std::cout << "ClapTrap" << _name << " is being repaired " << std::flush;
    _hitPoints += amount;
    _energyPoints--;
    std::cout << "It has now " << _hitPoints << " Hit Points !!!"<< std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints < 0)
    {
        std::cout << _name << " is dead (cant take damage anymore)" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name <<" is taking damage " << std::flush;
    _hitPoints -= amount;
    std::cout << "It has now " << _hitPoints << " Hit Points !!!" << std::endl;
}

void    ClapTrap::displayInfo(void) const
{
    std::cout << "Clap named " << _name << " has : \n"
    << _hitPoints << " hit points\n"
    << _energyPoints << " enrgy points\n" 
    << _attackDamage << " attack damage\n" << std::endl;
}

/*===============================*/

/*================== GETTERS ==================*/

std::string    ClapTrap::getName(void) const
{
    return _name;
}

int    ClapTrap::getHitPoints(void) const
{
    return _hitPoints;
}

int    ClapTrap::getEnergyPoints(void) const
{
    return _energyPoints;
}

int    ClapTrap::getAttackDamage(void) const
{
    return _attackDamage;
}
/*================== SETTERS ==================*/

void ClapTrap::setHitPoints(int points)
{
    _hitPoints = points;
}

void ClapTrap::setEnergyPoints(int points)
{
    _energyPoints = points;
}

void ClapTrap::setAttackDamage(int points)
{
    _attackDamage = points;
}
