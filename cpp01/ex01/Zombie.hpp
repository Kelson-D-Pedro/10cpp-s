/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:22:01 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/07 12:36:38 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iomanip>
#include <iostream>


class Zombie
{
private:

    std::string name;

public:

    Zombie(void);
    ~Zombie();
    void    set_name(std::string name);
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

# endif