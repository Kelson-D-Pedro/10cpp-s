/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:29:51 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/19 18:59:58 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout   << this->name << " Was Created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout   << this->name << " Was Deleted" << std::endl;
}

ClapTrap&   ClapTrap::operator=(ClapTrap& other)
{
    if (&other != this)
    {
        std::cout   << "Copy Assignment Operator" << std::endl;
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return (*this);
}

ClapTrap::ClapTrap(ClapTrap& other)
{
    std::cout   << "Copy Constructor" << std::endl;
    *this = other;
}

void    ClapTrap::attack(const std::string& target)
{
    if (energy_points > 0)
        std::cout   << "ClapTrap " << this->name << " attacks "
                    << target << ", causing" << this->attack_damage 
                    << "points of damage!" << std::endl;
    else
        std::cout   << "ClapTrap " << this->name 
                    << "Have Not Enough Energy Points to Attack" << std::endl;
}
