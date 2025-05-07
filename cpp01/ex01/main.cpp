/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:39:39 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/07 12:54:48 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    Zombie* zombies;
    int     N;
    std::string name;

    std::cout << "How many zombies do you want to create?" << std::endl;
    std::cin >> N;
    std::cout << "Tell the Zombies's names" << std::endl;
    std::cin >> name;
    zombies = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[] (zombies);
    return (0);
}
