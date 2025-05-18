/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darwin <darwin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:37:25 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/18 12:53:37 by darwin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIZED_HPP

# include <iostream>

class Fixed
{
private:

    int value;
    static const int bits = 8;

public:

    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

};




#endif