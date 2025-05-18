/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darwin <darwin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:26:48 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/18 16:42:28 by darwin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:

    int value;
    static const int bits = 8;

public:

    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed& other);
    ~Fixed();
    
    Fixed& operator=(const Fixed& other);

    Fixed   operator+(Fixed const other) const;
    Fixed   operator-(Fixed const other) const;
    Fixed   operator*(Fixed const other) const;
    Fixed   operator/(Fixed const other) const;

    Fixed&  operator++() const;
    Fixed&  operator--() const;
    Fixed&  operator++(int) const;
    Fixed&  operator--(int) const;

    bool  operator<(const Fixed& other) const;
    bool  operator<=(const Fixed& other) const;
    bool  operator>(const Fixed& other) const;
    bool  operator>=(const Fixed& other)const ;
    bool  operator!=(const Fixed& other) const;
    bool  operator==(const Fixed& other) const;


    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
    
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    
};

# endif