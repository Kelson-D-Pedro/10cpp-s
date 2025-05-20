/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:28:34 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/20 12:39:53 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Ares");
    ClapTrap b("Zeus");

    a.attack("Zeus");
    b.takeDamage(5);
    b.beRepaired(3);
    b.attack("Ares");
    a.takeDamage(10);
    a.beRepaired(2); // Não deve funcionar se estiver com 0 hit points

    return 0;
}