/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:01:58 by youlee            #+#    #+#             */
/*   Updated: 2021/03/02 12:38:14 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
class Span
{
	private:
		std::multiset<int> ms;
		unsigned int max_size;
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &s);
		Span &operator=(const Span &s);
		virtual ~Span(void);
		void addNumber(int val);
		template <typename T>
		void addNumber(T start, T end)
		{
			this->ms.size() + std::distance(start, end) > this->max_size ? throw(Span::Span_Full()) : this->ms.insert(start,end);
		}
		long long shortestSpan(void) const;
		long long longestSpan(void) const;

		class NotEnoughSpace : public std::exception
		{
			virtual const char *what() const throw();
		};
		class Span_Full : public std::exception
		{
			virtual const char *what() const throw();
		};
};
#endif
