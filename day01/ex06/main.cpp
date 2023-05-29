/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 01:02:14 by mparisse          #+#    #+#             */
/*   Updated: 2023/05/17 04:11:53 by mparisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	switch_function(int choice)
{
	Harl	test;

	switch (choice){
		case 0:
			test.complain("debug");
		case 1:
			test.complain("info");
		case 2:
			test.complain("warning");
		case 3:
			test.complain("error");
	}
}

int main(int ac, char **av)
{
	(void) ac;
	int		case_index;
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (tab[i] == av[1])
		{
			case_index = i;
			switch_function(case_index);
			return (0);
		}
	}
	return (0);
}