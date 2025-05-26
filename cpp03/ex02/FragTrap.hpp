/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:49:29 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/26 17:51:59 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:

        FragTrap(std::string name);
        FragTrap();
        FragTrap(FragTrap& other);
        FragTrap& operator=(FragTrap& other);
        ~FragTrap();
        void     highFivesGuys(void);
        
};

# endif