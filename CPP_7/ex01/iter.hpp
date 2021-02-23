/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:16:50 by youlee            #+#    #+#             */
/*   Updated: 2021/02/23 17:35:46 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
template <typename T>
void	iter(T *ar, size_t len, T (*func)(T &))
{
	if (!ar)
		return ;
	for (size_t i = 0; i < len; i++)
		(*func)(ar[i]);
}

char	upper(char &a)
{
	if (97<=a && a <= 122)
		a-=32;
	return (a);
}

char	lower(char &a)
{
	if (65<=a && a<=90)
		a+=32;
	return (a);
}

#endif
