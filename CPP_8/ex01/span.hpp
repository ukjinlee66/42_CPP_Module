/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:01:58 by youlee            #+#    #+#             */
/*   Updated: 2021/02/23 20:31:43 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <algorithm>
#include <set>
#include <cmath>
class Span
{
	private:
		std::multiset<int> ms;
		unsigned int max_size;
		int	max_numb;
		int min_numb;
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &s);
		Span &operator=(const Span &s);
		virtual ~Span(void);
		void addNumber(int val);
		template <typename T>
		void addNumber(T start, T end);
		long long shortestSpan(void) const;
		long long longestSpan(void) const;

		class NotEnoughSpace : public std::exception
		{
			const char *what() const throw()
			{
				return ("Not Found Span!\n");
			}
		};
		class Span_Full : public std::exception
		{
			const char *what() const throw()
			{
				return ("Span is Full!\n");
			}
		};
};
#include "span.ipp"
#endif
