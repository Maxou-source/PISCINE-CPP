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
 * @ Create Time: 2023-06-07 01:53:33
 */

#include "Bureaucrat.hpp"

int main()
{
    /*=== instantiating a too low grade ===*/
    std::cout << "Instantiating a too high grade" << std::endl;
    try
    {
        Bureaucrat employeeOne("jean", 1);
        std::cout << employeeOne << std::endl;
        employeeOne.promote();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    /*=== instantiating a too high grade ===*/
    std::cout << "\nInstantiating a too low grade" << std::endl;
    try
    {
        Bureaucrat employeeTwo("jean", 150);
        employeeTwo.downgrade();
        std::cout << employeeTwo << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}