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
* @ Create Time: 1970-01-01 01:00:00
*/

#pragma once

#include <iostream>
#include <string>

class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    public:
    /*=== Constructors ===*/
        MateriaSource();
        MateriaSource(const MateriaSource& copy);

        MateriaSource& operator=(const MateriaSource);

    /*=== Destructors ===*/
        ~MateriaSource();

    /*=== Member Functions ===*/
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
    private:
        AMateria *_data[4];
        int _idx;
};