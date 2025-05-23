/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darwin <darwin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:27:03 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/18 16:10:54 by darwin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"


Fixed::Fixed() : value(0)
{
    std::cout   << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : value(value * (1 << 8))
{
    std::cout   << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) : value(value * (1 << 8))
{
    std::cout   << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other) : value(other.value )
{
    std::cout   << "Copy constructor called" << std::endl;
}


Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout   << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->value = other.value;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout   << "Destructor called" << std::endl;
}

float   Fixed::toFloat(void) const
{
    return (float)(this->value) / (1 << this->bits);
}

int     Fixed::toInt(void) const
{
    return (this->value >> this->bits);
}

std::ostream&   operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}
