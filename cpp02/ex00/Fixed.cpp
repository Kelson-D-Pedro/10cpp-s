/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darwin <darwin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:38:16 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/18 15:40:34 by darwin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout   << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout   << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout   << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout   << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout   << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    this->value = raw;
}