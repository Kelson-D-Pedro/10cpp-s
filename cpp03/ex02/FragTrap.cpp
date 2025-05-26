/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:49:05 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/26 17:54:19 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    set_name(name);
    set_hit_points(100);
    set_energy_points(50);
    set_attack_damage(20);
    std::cout   << "FragTrap " << "constructor" << std::endl;
}

FragTrap::FragTrap()
{
    set_name("Zé");
    set_hit_points(100);
    set_energy_points(100);
    set_attack_damage(30);
    std::cout   << "FragTrap " << "constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other)
{
    std::cout   << "Copy Operator Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout   << "FragTrap " << "Destructor" << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap& other)
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

void    FragTrap::highFivesGuys(void)
{
    std::cout   << "High five! ✋ Let's celebrate some good vibes!" << std::endl;
}