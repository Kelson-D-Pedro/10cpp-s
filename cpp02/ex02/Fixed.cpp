/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darwin <darwin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:27:03 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/18 17:26:43 by darwin           ###   ########.fr       */
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
    std::cout   << "Copy assignment operator calleds" << std::endl;
    if (this != &other)
        this->value = other.value;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout   << "Destructor called" << std::endl;
}







Fixed   Fixed::operator+(Fixed const other) const
{
    Fixed   temp;

    temp.setRawBits(this->getRawBits() + other.getRawBits());
    return (temp);
}

Fixed   Fixed::operator-(Fixed const other) const
{
    Fixed   temp;

    temp.setRawBits(this->getRawBits() - other.getRawBits());
    return (temp);
}

Fixed   Fixed::operator*(Fixed const other) const
{
    Fixed   temp;

    temp.setRawBits((this->getRawBits() * other.getRawBits()) / (1 << 8));
    return (temp);
}

Fixed   Fixed::operator/(Fixed const other) const
{
    Fixed   temp;

    temp.setRawBits((this->getRawBits() *  (1 << 8)) / other.getRawBits());
    return (temp);
}





Fixed&  Fixed::operator++()
{
    ++this->value;
    return (*this);
}

Fixed&  Fixed::operator--()
{
    --this->value;
    return (*this);
}

Fixed  Fixed::operator++(int)
{
    Fixed   temp = *this;
    this->value++;
    return temp;
}

Fixed  Fixed::operator--(int)
{
    Fixed   temp = *this;
    this->value--;
    return temp;
}







bool Fixed::operator<(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) const
{
    return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->getRawBits() != other.getRawBits());
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

int Fixed::getRawBits(void) const
{
    std::cout   << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
