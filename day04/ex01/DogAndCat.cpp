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
 * @ Create Time: 2023-05-27 14:25:01
 */


#include "DogAndCat.hpp"

/*=+=+=+=+=+=+=+=+=+=+=+=+ DOG =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/

Dog::Dog(void)
{
    std::cout << "Dog <default> constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Dog <copy> constructor called" << std::endl;
    _type = copy._type;
    _brain = new Brain;
    for (int i = 0; i < 100; i++)
    {
        _brain->ideas[i] = copy.getBrain()->ideas[i];
    }
}

/*++++ Overload = oprator ++++*/

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog <copy assignement> operator called" << std::endl;
    this->_type = rhs._type;
    for (int i = 0; i < 100; i++)
    {
        this->getBrain()->ideas[i] = rhs.getBrain()->ideas[i];
    }
    return (*this);
}

/*++++++++*/

/*======== DESTRUCTORS ========*/

Dog::~Dog(void)
{
    std::cout << "Dog <destructor> dog called" << std::endl;
    delete _brain;
}

/*===============================*/

/*===============================*/

void    Dog::makeSound(void) const
{
    std::cout << "bark: Woooooooof" << std::endl;
}

/*=========== GETTERS ===========*/

Brain*    Dog::getBrain(void) const
{
    return (_brain);
}

/*===============================*/


/*=========== SETTERS ===========*/


void    Dog::setIdea(std::string idea, int n)
{
    getBrain()->ideas[n] = idea;
}

/*===============================*/

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/


/*=+=+=+=+=+=+=+=+=+=+=+=+ CAT =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/

Cat::Cat(void)
{
    std::cout << "Cat <default> constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain;
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Cat <copy> constructor called" << std::endl;
    _type = copy._type;
    _brain = new Brain;
    for (int i = 0; i < 100; i++)
    {
        _brain->ideas[i] = copy.getBrain()->ideas[i];
    }
}

/*++++ Overload = oprator ++++*/

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat <copy assignement> operator called" << std::endl;
    this->_type = rhs._type;
    for (int i = 0; i < 100; i++)
    {
        this->getBrain()->ideas[i] = rhs.getBrain()->ideas[i];
    }
    return (*this);
}

/*++++++++*/

/*======== DESTRUCTORS ========*/

Cat::~Cat(void)
{
    std::cout << "Cat <destructor> cat called" << std::endl;
    delete _brain;
}

/*===============================*/

/*======== MEMBER FUNCTIONS ========*/

void    Cat::makeSound(void) const
{
    std::cout << "meows: Miaaaaooouuu" << std::endl;
}

/*===============================*/

/*=========== GETTERS ===========*/


Brain*    Cat::getBrain(void) const
{
    return (_brain);
}

/*===============================*/


/*=========== SETTERS ===========*/


void    Cat::setIdea(std::string idea, int n)
{
    getBrain()->ideas[n] = idea;
}

/*===============================*/

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/