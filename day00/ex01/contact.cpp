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
 * @ Create Time: 2023-05-09 09:18:00
 */

#include "contact.hpp"

// setters

void	Contact::setName(const std::string& _name)
{
	this->_name = _name;
}

void	Contact::setLastName(const std::string& _lastName)
{
	this->_lastName = _lastName;
}

void	Contact::setNickName(const std::string& _nickName)
{
	this->_nickName = _nickName;
}

void	Contact::setDarkestSecret(const std::string& _darkestSecret)
{
	this->_darkestSecret = _darkestSecret;
}

void	Contact::setPhoneNumber(const std::string& _phoneNumber)
{
	this->_phoneNumber = _phoneNumber;
}

// getters

const	std::string& Contact::getName(void) const
{
	return _name;
}

const	std::string& Contact::getLastName(void) const
{
	return _lastName;
}

const	std::string& Contact::getNickName(void) const
{
	return _nickName;
}

const	std::string& Contact::getDarkestSecret(void) const
{
	return _darkestSecret;
}

const	std::string& Contact::getPhoneNumber(void) const
{
	return _phoneNumber;
}

