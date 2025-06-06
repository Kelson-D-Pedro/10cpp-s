/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:29:51 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/26 17:31:40 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout   << "ClapTrap " << "constructor" << std::endl;
}

ClapTrap::ClapTrap() : name("ZÉ"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout   << "ClapTrap " << "constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout   << "ClapTrap " << "destructor" << std::endl;
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
    {
        this->energy_points--;
        std::cout   << "ClapTrap " << this->name << " attacks "
                    << target << ", causing " << this->attack_damage 
                    << " points of damage!" << std::endl;
    }
    else
        std::cout   << "ClapTrap " << this->name 
                    << "Have Not Enough Energy Points to Attack" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points < (int)amount)
        this->hit_points = 0;
    else
        this->hit_points -= amount;
    std::cout   << "ClapTrap " << this->name << " Suffer " << (int)amount
                << " Damage Points" << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points > 0 && this->hit_points > 0)
    {
        this->hit_points += amount;
        this->energy_points--;
    }
    else
        std::cout   << "ClapTrap " << this->name << " cannot be repaired!" << std::endl;
    
}

void ClapTrap::set_name(const std::string name)
{
    this->name = name;
}

void ClapTrap::set_hit_points(int hit_points)
{
    this->hit_points = hit_points;
}

void ClapTrap::set_energy_points(int energy_points)
{
    this->energy_points = energy_points;
}

void ClapTrap::set_attack_damage(int attack_damage)
{
    this->attack_damage = attack_damage;
}


std::string ClapTrap::get_name(void)
{
    return this->name;
}

int ClapTrap::get_hit_points(void)
{
    return this->hit_points;
}

int ClapTrap::get_energy_points(void)
{
    return this->energy_points;
}

int ClapTrap::get_attack_damage(void)
{
    return this->attack_damage;
}

