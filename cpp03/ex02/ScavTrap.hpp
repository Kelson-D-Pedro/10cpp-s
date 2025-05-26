/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:14:55 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/26 16:17:21 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(ScavTrap& other);
        ScavTrap& operator=(ScavTrap& other);
        ~ScavTrap();
        void    guardGate();
        
};

# endif