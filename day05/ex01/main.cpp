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
 * @ Create Time: 2023-06-11 20:11:12
 */

#include "Bureaucrat.hpp"

int main()
{
    /*=== instantiating a too low grade ===*/
    std::cout << "Instantiating a Bureaucrat too high grade" << std::endl;
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
    std::cout << "\nInstantiating a Bureaucrat too low grade" << std::endl;
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

    std::cout << "\nInstantiating a Form too low grade" << std::endl;
    try
    {
        Form caution("caution lil bro", -1, -4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nForm signed everythings fine" << std::endl;
    Bureaucrat parent("mom", 4);
    Form contract("insurance", 5, 1 );

    contract.beSigned(parent);
    parent.signForm(contract);
}