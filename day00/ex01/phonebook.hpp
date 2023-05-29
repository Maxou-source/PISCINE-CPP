/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:46:50 by mparisse          #+#    #+#             */
/*   Updated: 2023/05/09 18:53:00 by mparisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <sstream>
# include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		/*GETTERS*/
		const int& getNumber(void) const;

		/*SETTERS*/ 
		void setNumber(const int& number);

		/*MEMBER FUNCTION*/
		void increment();
		void print_over_all(void);
		void more_info(int index);
		void setContact(const std::string[], int index);
	private:
		Contact contacts[8];
		int number_of_contact;
};

# endif
