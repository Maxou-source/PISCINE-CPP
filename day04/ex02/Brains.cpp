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
 * @ Create Time: 2023-05-28 11:49:01
 */

#include "Brains.hpp"

/*======== CONSTRUCTORS ========*/

Brain::Brain(void)
{
    std::cout << "Brain <default> constructor called" << std::endl;
}

Brain::Brain(const Brain& rhs)
{
    std::cout << "Brains <copy> constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = rhs.ideas[i];
    }
}

/*++++ Overload = oprator ++++*/

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "Brains <copy assignement> operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}

/*++++++++*/

/*===============================*/

Brain::~Brain(void)
{
    std::cout << "Brains Destructor called" << std::endl;
}


