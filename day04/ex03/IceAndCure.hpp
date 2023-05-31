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
 * @ Create Time: 2023-05-29 01:11:39
 */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

/*
canonical:
default
copy
operator =
destructor
*/
class ICharacter;

class Ice : public AMateria
{
    public:
        /*=== Constructors ===*/
        Ice();
        Ice(const Ice&);

        
        Ice& operator=(const Ice& rhs);

        /*=== Destructors ===*/
        ~Ice();

        /*=== From Base Class ===*/
        virtual AMateria* clone() const;
        void use(ICharacter& target);
        std::string const & getType() const;
};

class Cure : public AMateria
{
    public:
        /*=== Constructors ===*/
        Cure();
        Cure(const Cure&);
        Cure& operator=(const Cure& rhs);

        /*=== Destructors ===*/
        ~Cure();
        
        /*=== From Base Class ===*/
        virtual AMateria* clone() const;
        void use(ICharacter& target);
        std::string const & getType() const;
};