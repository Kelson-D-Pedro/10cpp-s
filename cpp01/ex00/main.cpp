/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:41:09 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/07 12:40:16 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    Zombie* zombie;

    zombie = newZombie("Paulo");
    zombie->announce();
    randomChump("Jorge");
    delete (zombie);
    return (0);
}
