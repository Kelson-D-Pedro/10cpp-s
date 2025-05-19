/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:27:03 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/19 10:32:33 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"


Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(int const value) : value(value * (1 << 8))
{
}

Fixed::Fixed(float const value) : value(value * (1 << 8))
{
}
Fixed::Fixed(const Fixed& other) : value(other.value )
{
}


Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->value = other.value;
    return (*this);
}

Fixed::~Fixed()
{
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


Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a); 
}
const Fixed&  Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a); 
}
Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
const Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
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
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
