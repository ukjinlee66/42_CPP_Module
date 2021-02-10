/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:28:08 by youlee            #+#    #+#             */
/*   Updated: 2021/02/09 16:28:09 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->point_value = 0;
    std::cout<<"Default constructor called\n";
}
Fixed::Fixed(const Fixed &a)
{
    std::cout<<"Copy constructor called\n";
    *this = a;
}
Fixed::~Fixed(void)
{
    std::cout<<"Destructor called\n";
}
int Fixed::getRawBits( void ) const
{
    std::cout<<"getRawBits member function called\n";
    return (this->point_value);
}
void Fixed::setRawBits( int const raw )
{
    this->point_value = raw;
}
void Fixed::operator=(const Fixed &f)
{
    std::cout<<"Assignation operator called\n";
    this->point_value = f.getRawBits();
}