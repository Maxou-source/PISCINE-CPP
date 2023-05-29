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
 * @ Create Time: 2023-03-31 01:48:28
 */

#include "phonebook.hpp"
#include <iomanip>

PhoneBook::~PhoneBook()
{
	std::cout << "destroying phonebook" << std::endl;
}

PhoneBook::PhoneBook()
{
	number_of_contact = 0;
}

void PhoneBook::increment(void)
{
	this -> number_of_contact++;
}

const int& PhoneBook::getNumber(void) const
{
	return number_of_contact;
}

void PhoneBook::setNumber(const int& number)
{
	this -> number_of_contact = number;
}

void	PhoneBook::setContact(const std::string tableau[], int index)
{
	contacts[index].setName(tableau[0]);
	contacts[index].setLastName(tableau[1]);
	contacts[index].setNickName(tableau[2]);
	contacts[index].setDarkestSecret(tableau[3]);
	contacts[index].setPhoneNumber(tableau[4]);
}

void	PhoneBook :: more_info(int index)
{
	std::cout << "Here is more info on the contact" << std::endl;
	std::cout << "Contact's Name: " << contacts[index].getName() << std::endl;
	std::cout << "Contact's Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Contact's Nick Name: " << contacts[index].getNickName() << std::endl;
	std::cout << "Contact's Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	std::cout << "Contact's Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
}

const std::string limitString(const std::string& line)
{
	std::string res(line);

	if (line.size() > 10)
	{
		res.resize(10);
		res.at(9) = '.';
	}
	return res;
}

void PhoneBook::print_over_all(void)
{
	std::cout
        << "|" << std::setw(10) << "Index"
        << "|" << std::setw(10) << "First Name"
        << "|" << std::setw(10) << "Last Name"
        << "|" << std::setw(10) << "Nick Name|"
        << std::endl;
	for (int i = 0; i < number_of_contact; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << limitString(contacts[i].getName()) << "|";
		std::cout << std::setw(10) << limitString(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << limitString(contacts[i].getNickName()) << "|"  << std::endl;
	}
}
