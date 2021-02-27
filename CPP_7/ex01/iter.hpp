/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:16:50 by youlee            #+#    #+#             */
/*   Updated: 2021/02/27 22:47:44 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
template <typename T>
void	iter(T *ar, size_t len, void (*func)(T const &))
{
	if (!ar)
		return ;
	for (size_t i = 0; i < len; i++)
		(*func)(ar[i]);
}

template<typename T>
void display(T const &value)
{
	std::cout << value << " ";
}
#endif
