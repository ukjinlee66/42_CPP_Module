/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:28:02 by youlee            #+#    #+#             */
/*   Updated: 2021/02/09 16:28:03 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int point_value;
    static const int fractional_bit = 8;
public:
    Fixed(void);
    Fixed(const Fixed &a);
    Fixed(const int num);
    Fixed(const float f);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    void operator=(const Fixed &f);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream& os, Fixed const &f);

#endif