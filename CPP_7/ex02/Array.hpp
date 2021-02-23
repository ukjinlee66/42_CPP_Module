/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:37:18 by youlee            #+#    #+#             */
/*   Updated: 2021/02/23 19:13:04 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T *data;
		unsigned int _size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &a);
		Array &operator=(const Array &a);
		T& operator[](unsigned int idx);
		unsigned int size(void) const;
		virtual ~Array(void);
		class OutRange : public std::exception
		{
			virtual const char *what() const throw();
		};
};

#include "Array.ipp"
#endif
