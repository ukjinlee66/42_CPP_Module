/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:20:16 by youlee            #+#    #+#             */
/*   Updated: 2021/02/23 19:55:52 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <exception>

class NotfoundException : public std::exception
{
	const char *what() const throw()
	{
		return ("Not found this index!\n");
	}
};

template <typename T>
void	easyfind(T &ar, int n)
{
	typename T::iterator i;
	if ((i = std::find(ar.begin(), ar.end(), n)) == ar.end())
		throw (NotfoundException());
	std::cout << "find value!" << std::endl;
}

#endif
