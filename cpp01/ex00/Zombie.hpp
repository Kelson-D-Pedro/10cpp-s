/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:30:17 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/07 12:02:57 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef    ZOMBIE_HPP
# define    ZOMBIE_HPP

# include <iomanip>
#include <iostream>


class Zombie
{
private:

    std::string name;

public:

    Zombie(std::string name);
    ~Zombie();
    void    announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

# endif