/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:45:06 by mparisse          #+#    #+#             */
/*   Updated: 2023/05/17 03:53:00 by mparisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>

class Harl
{
	public:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

		void	complain(std::string level);
	private:

};