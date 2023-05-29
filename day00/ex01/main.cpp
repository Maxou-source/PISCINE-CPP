# include <string>
# include <iostream>
# include <cstring>
# include "phonebook.hpp"
# include "contact.hpp"

int	newContact(PhoneBook& phone, int j)
{
	std::string tab[5];
	std::string instructions[5] = {"enter name: ", "enter last name: ",
			"enter nick name: ", "enter darkest secret: ", "enter phone number: "};

	for (int i = 0; i < 5; i++)
	{
		std::cout << instructions[i] << std::flush;
		getline(std::cin, tab[i]);
		if (std::cin.eof())
			break ;
		while (tab[i].size() == 0)
		{
			std::cout<< instructions[i] << std::flush;
			getline(std::cin, tab[i]);
			if (std::cin.eof())
				break ;
		}
		for (int i = 0; i < 5; i++)
			;
	}
	phone.setContact(tab, j);
	if (phone.getNumber() < 8)
		phone.increment();
	return (0);
}

int main()
{
	int			index = 0;
	PhoneBook	phone;
	Contact		contact;
	std::string	str;

	while (1)
	{
		std::cout << "Enter an action for the phonebook : " << std::flush;
		if (!std::getline(std::cin, str))
			break;
		if (str == "ADD")
		{
			if (index == 8)
				index = 0;
			newContact(phone, index++);
		}
		else if (str == "SEARCH")
		{
			phone.print_over_all();
			std::cout << "enter index to look up: " << std::flush;
			if (!std::getline(std::cin, str))
				break;
			if (str.find_first_not_of("0123456789") != std::string::npos)
			{
				std::cout << "not a valid argument leaving SEARCH action." << std::endl;
				continue ;
			}
			else
			{
				int index_given;
				std::stringstream ss(str);
				ss >> index_given;
				if (index_given > (index - 1) || ss.fail() || index_given < 0)
				{
					std::cout << "not a valid argument leaving SEARCH action." << std::endl;
					continue ;
				}
				phone.more_info(index_given);
			}
		}
		else if (str == "EXIT")
		{
			std::cout << "good bye new phonebook ... !!!" << std::endl;
			break ;
		}
	}
}
