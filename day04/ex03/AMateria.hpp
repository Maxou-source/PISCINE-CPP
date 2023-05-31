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
 * @ Create Time: 2023-05-29 01:10:22
 */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "Characters.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
    /*=== Constructors ===*/
        AMateria();
        AMateria(const AMateria&);

        AMateria(std::string const & type);

        AMateria& operator=(const AMateria &);

    /*=== Destructors ===*/
        ~AMateria();

    /*=== Getters ===*/
        std::string const & getType() const;
        
    /*=== Member Functions ===*/
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif