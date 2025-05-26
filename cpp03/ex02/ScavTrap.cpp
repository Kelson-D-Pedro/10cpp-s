/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:14:40 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/26 17:29:51 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    set_name(name);
    set_hit_points(100);
    set_energy_points(50);
    set_attack_damage(20);
    std::cout   << "ScavTrap " << "constructor" << std::endl;
}

ScavTrap::ScavTrap()
{
    set_name("Zé");
    set_hit_points(100);
    set_energy_points(50);
    set_attack_damage(20);
    std::cout   << "ScavTrap " << "constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{
    std::cout   << "Copy Operator Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout   << "ScavTrap " << "Destructor" << std::endl;
}

ScavTrap&   ScavTrap::operator=(ScavTrap& other)
{
    std::cout   << "Copy Assignment Operator" << std::endl;
    if (&other != this)
    {
        set_name(get_name());
        set_hit_points(get_hit_points());
        set_energy_points(get_energy_points());
        set_attack_damage(get_attack_damage());
    }
    return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout   << "ScavTrap " << get_name() << " is on keeper mode" << std::endl;
}
