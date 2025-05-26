/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:28:51 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/26 16:12:09 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:

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

    void    set_name(const std::string name);
    void    set_hit_points(int hit_points);
    void    set_energy_points(int energy_points);
    void    set_attack_damage(int attack_damage);

    std::string get_name(void);
    int         get_hit_points(void);
    int         get_energy_points(void);
    int         get_attack_damage(void);
    
};

# endif