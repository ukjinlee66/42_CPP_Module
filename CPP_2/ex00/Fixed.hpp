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

#include <iostream>

class Fixed
{
private:
    int point_value;
    static const int fractional_bit = 8;
public:
    Fixed(void);
    Fixed(const Fixed &a);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    void operator=(const Fixed &f);
};