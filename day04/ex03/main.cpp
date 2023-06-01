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
 * @ Create Time: 2023-05-29 01:34:57
 */

#include "AMateria.hpp"
#include "IceAndCure.hpp"
#include "Characters.hpp"

/*
destruction without any equipement
*/

int main()
{
    AMateria *icee = new Ice;

    Character Maxou("Maxou");

    ICharacter *random = new Character("random");

    Maxou.equip(icee);
    // Maxou.unequip(0);
    Maxou.use(0, *random);


}