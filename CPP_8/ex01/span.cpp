/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:01:44 by youlee            #+#    #+#             */
/*   Updated: 2021/02/23 20:01:52 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : max_size(0) {} 
Span::Span(unsigned int n) : max_size(n) {}
Span::Span(const Span &s)
{
    this->max_size = s.max_size;
    this->ms.clear();
    this->ms = s.ms;
}
Span &Span::operator=(const Span &s)
{
    if (this == &s)
        return (*this);
    this->max_size = s.max_size;
    this->ms.clear();
    this->ms = s.ms;
    return (*this);
}
Span::~Span(void) { this->ms.clear(); }
void Span::addNumber(int val)
{
    if (this->ms.size() == this->max_size)
        throw(Span::Span_Full());
    this->ms.insert(val);
}
long long Span::shortestSpan(void) const
{
    long long ret;

    if(this->ms.size() <= 1)
        throw (Span::NotEnoughSpace());
    std::multiset<int>::iterator head = this->ms.begin();
    std::multiset<int>::iterator next = ++this->ms.begin();
    ret = std::labs((long long)*next - (long long)*head);
    head++;
    next++;
    while (next != this->ms.end())
    {
        if (ret > std::labs((long long)*next - (long long)*head))
            ret = std::labs((long long)*next - (long long)*head);
        head++;
        next++;
    }
    return (ret);
}
long long Span::longestSpan(void) const
{
    if(this->ms.size() <= 1)
        throw (Span::NotEnoughSpace());
    std::multiset<int>::iterator max_numb;
    max_numb = std::max_element(this->ms.begin(), this->ms.end());
    std::multiset<int>::iterator min_numb;
    min_numb = std::min_element(this->ms.begin(), this->ms.end());
    return (std::labs((long long)*max_numb - (long long)*min_numb));
}

const char *Span::NotEnoughSpace::what() const throw() 			
{
	return ("Not Found Span!\n");
}

const char *Span::Span_Full::what() const throw()
{
	return ("Span is Full!\n");
}