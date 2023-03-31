/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:31:18 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/31 12:19:04 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include "colors.h"

# define EXIT "EXIT"
# define ADD "ADD"
# define SEARCH "SEARCH"

class Contact 
{
	private:
		std::string name;
		std::string last_name;
		std::string nick;
		std::string phone_number;
		std::string darkest_secret;
		
	public:
		Contact();
		~Contact();
		
		std::string get_name() const;
		std::string get_last_name() const;
		std::string get_nick() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;
		
		void set_name(std::string new_name);
		void set_last_name(std::string new_last_name);
		void set_nick(std::string new_nick);
		void set_phone_number(std::string new_phone_number);
		void set_darkest_secret(std::string new_darkest_secret);
		void display(int id);
				
		void encrypt();
		
		void show() const;

		void add();
};

#endif
