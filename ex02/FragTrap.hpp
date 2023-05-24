/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:28:54 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/24 21:26:11 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap& FragTrap);
        FragTrap& operator=(const FragTrap& fragTrap);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif 