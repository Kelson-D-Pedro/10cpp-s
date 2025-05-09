/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:13:08 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/09 13:45:58 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:

std::string name;
Weapon*     weapon;

public:
    HumanB(std::string name);
    ~HumanB();
    void    attack(void);
    void    setWeapon(Weapon& weapon);
};

# endif