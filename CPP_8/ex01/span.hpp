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
#include <list>
class Span
{
	private:
		std::vector<int> vec;
		long num;
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &s);
		Span &operator=(const Span &s);
		virtual ~Span(void);
		void addNumber(int N);
		long long shortestSpan(void);
		long long longestSpan(void);

		class NotFoundSpan : public std:exception
		{
			const char *what() const throw()
			{
				return ("Not Found Span!\n");
			}
		};
		class Number_Full : public std::exception
		{
			const char *what() const throw()
			{
				return ("Number is Full!\n");
			}
		};
};
#endif
