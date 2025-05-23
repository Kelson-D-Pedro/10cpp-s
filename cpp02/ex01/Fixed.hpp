/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darwin <darwin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:26:48 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/18 16:09:53 by darwin           ###   ########.fr       */
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
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
    
    
    float   toFloat(void) const;
    int     toInt(void) const;
    
};

# endif