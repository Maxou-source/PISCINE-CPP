/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:44:50 by mparisse          #+#    #+#             */
/*   Updated: 2023/05/17 03:55:17 by mparisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
/*
void	debug(void);
void	info(void);
void	warning(void);
void	error(void);
*/

void	Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: I cannot believe adding extra bacon costs more money." << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level.empty())
	{
		std::cout << "this is not working" << std::endl;
	}

	void (Harl::*t_func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	tab[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level.c_str() == tab[i])
			(this->*t_func[i])();
	}
}
