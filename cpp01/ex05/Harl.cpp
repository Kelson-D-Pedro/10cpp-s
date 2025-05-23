/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:21:21 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/10 15:53:22 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::debug(void)
{
    std::cout   << "I love having extra bacon for my "
                << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
                << std::endl;
}

void    Harl::info(void)
{
    std::cout   << "I cannot believe adding extra bacon costs more money. You didn\'t put"
                << "enough bacon in my burger! If you did, I wouldn\'t be asking for more!"
                << std::endl;
}

void    Harl::warning(void)
{
    std::cout   << "I think I deserve to have some extra bacon for free. I\'ve been coming "
                << "for years, whereas you started working here just last month."
                << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    void            (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string     levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int             i = 0;

    while (levels[i].compare(level) != 0 && i < 4)
        i++;
    if (i == 4)
        return ;
    (this->*functions[i])();
    
}