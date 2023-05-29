/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 01:02:14 by mparisse          #+#    #+#             */
/*   Updated: 2023/05/17 03:46:49 by mparisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	test;

	test.complain("info");
	test.complain("debug");
	test.complain("warning");
	test.complain("error");
	test.complain("");
}