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
# include <iostream>
# include <string>


class ICharacter;

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
        virtual ~AMateria();

    /*=== Setters && Getters ===*/
        std::string const & getType() const {return (_type);}
        void setType(std::string const & type) {_type = type;}
        
    /*=== Member Functions ===*/
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) {(void) target;};
};

#endif