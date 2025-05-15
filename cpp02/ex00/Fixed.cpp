/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:38:16 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/15 15:41:28 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() : value(0), bits(8)
{
    std::cout   << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : value(other.value), bits(other.bits)
{
    std::cout   << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->value = other.value;
    std::cout   << "Copy assignment operator" << std::endl;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout   << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
    std::cout   << "getRawBits member function called" << std::endl;
    return (this->value);
}