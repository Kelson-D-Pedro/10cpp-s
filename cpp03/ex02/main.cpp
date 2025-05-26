/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:11:06 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/26 16:11:13 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ex01/main.cpp
#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Scavy");

    scav.attack("Enemy");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    return 0;
}
