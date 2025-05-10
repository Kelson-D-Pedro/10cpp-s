/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:20:05 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/10 15:25:43 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:

    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

# endif