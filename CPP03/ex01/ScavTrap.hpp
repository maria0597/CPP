/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:28:21 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/24 20:28:23 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& scavTrap);
        ScavTrap& operator=(const ScavTrap& scavTrap);

    void attack(const std::string& target);
    void guardGate();
};

#endif
