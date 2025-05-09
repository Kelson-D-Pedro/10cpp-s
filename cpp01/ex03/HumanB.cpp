/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:14:28 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/09 13:47:11 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}