/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:20:45 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/31 11:38:19 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstring>

# define RESET "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define BOLDBLACK "\033[1m\033[30m"
# define BOLDRED "\033[1m\033[31m"
# define BOLDGREEN "\033[1m\033[32m"
# define BOLDYELLOW "\033[1m\033[33m"
# define BOLDBLUE "\033[1m\033[34m"
# define BOLDMAGENTA "\033[1m\033[35m"
# define BOLDCYAN "\033[1m\033[36m"
# define BOLDWHITE "\033[1m\033[37m"
# define LAMPRED "\033[5;31;40m"
# define LAMPCYAN "\033[5;36;40m"
# define LAMPWHITE "\033[5;36;40m"

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