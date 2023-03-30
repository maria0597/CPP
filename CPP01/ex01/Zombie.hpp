/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:20:45 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/29 15:20:47 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstring>
# include "colors.h"

class Zombie
{
	
	private:
		std::string	name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
	
		void		setName(std::string name);
		void		announce(void);

};
	
Zombie*		newZombie(std::string name);
void		randomChump(std::string name);
Zombie* 	zombieHorde( int N, std::string name );

#endif