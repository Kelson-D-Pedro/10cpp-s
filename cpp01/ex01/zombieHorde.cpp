/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:25:49 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/07 12:40:40 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    return (zombies);
}