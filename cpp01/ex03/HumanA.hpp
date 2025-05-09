/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:35:59 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/09 13:46:05 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:

    std::string name;
    Weapon& weapon;

public:

    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void    attack(void);
};

# endif