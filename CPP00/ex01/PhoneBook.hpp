/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:31:40 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/28 16:31:42 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <array>

# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact	contacts[MAX_CONTACTS];
		int		amount;

	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
		void	show();
};

#endif