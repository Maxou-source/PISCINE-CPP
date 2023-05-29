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
 * @ Create Time: 2023-05-09 07:48:00
 */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	public:
		const std::string& getName(void) const;
		const std::string& getLastName(void) const;
		const std::string& getNickName(void) const;
		const std::string& getDarkestSecret(void) const;
		const std::string& getPhoneNumber(void) const;

		void setName(const std::string&);
		void setLastName(const std::string&);
		void setNickName(const std::string&);
		void setDarkestSecret(const std::string&);
		void setPhoneNumber(const std::string&);
	private:
		std::string	_name;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_darkestSecret;
		std::string	_phoneNumber;
};

#endif