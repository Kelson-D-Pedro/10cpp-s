/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:24:35 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/07 12:46:36 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "Nobody";
}

Zombie::~Zombie()
{
    std::cout << this->name << " was destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}