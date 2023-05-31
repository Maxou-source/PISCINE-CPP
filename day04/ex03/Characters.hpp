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
 * @ Create Time: 2023-05-29 01:27:57
 */

#ifndef CHARACTERS_HPP
# define CHARACTERS_HPP

#include <iostream>
#include <string>

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
    public:
    /*=== Constructors ===*/
        Character();
        Character(std::string name);
        Character(const Character&);

    /*=== Destructors ===*/
        ~Character() {};

    /*=== Getters and Setters ===*/
        std::string const & getName(void) const;

    /*=== Member Functions ===*/
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);

    private:
        AMateria    *inventory[4];
        int         idx;
        std::string _name;
};

#endif