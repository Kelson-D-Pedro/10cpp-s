/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:28:51 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/20 13:19:00 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:

    std::string name;
    int         hit_points;
    int         energy_points;
    int         attack_damage;

public:

    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(ClapTrap& other);
    ClapTrap& operator=(ClapTrap& other);
    ~ClapTrap();

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    
};

# endif