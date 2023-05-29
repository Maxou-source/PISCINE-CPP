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
 * @ Create Time: 2023-05-13 12:27:46
 */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
    public:
    /*=== CONSTRUCTORS & DESTRUCTORS ===*/
        Zombie(std::string name);
        Zombie();
        ~Zombie();
    /*=== Member functions ===*/
        void announce( void );

    /*=== Setters ===*/
    void    setName(std::string name);

    private:
        std::string _name;

};

void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie( std::string name );

#endif