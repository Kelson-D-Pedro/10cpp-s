/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:10:08 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/09 13:44:33 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
    
    std::string type;

public:

    Weapon(std::string type);
    ~Weapon();
    const std::string&  getType(void);
    void    setType(std::string type);

};


# endif