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

Span::Span(void) : max_size(0), max_numb(-2147483648), min_numb(2147483647) {} 
Span::Span(unsigned int n) : max_size(n), max_numb(-2147483648), min_numb(2147483647) {}
Span::Span(const Span &s)
{
    this->max_size = s.max_size;
    this->ms.clear();
    this->ms = s.ms;
    this->max_numb = s.max_numb;
    this->min_numb = s.min_numb;
}
Span &Span::operator=(const Span &s)
{
    if (this == &s)
        return (*this);
    this->max_size = s.max_size;
    this->ms.clear();
    this->ms = s.ms;
    this->max_numb = s.max_numb;
    this->min_numb = s.min_numb;
    return (*this);
}
Span::~Span(void) { this->ms.clear(); }
void Span::addNumber(int val)
{
    if (this->ms.size() == this->max_size)
        throw(Span::Span_Full());
    this->ms.insert(val);
    if (val > this->max_numb) this->max_numb = val;
    if (val < this->min_numb) this->min_numb = val;
}
long long Span::shortestSpan(void) const
{
    int ret;

    if(this->ms.size() <= 1)
        throw (Span::NotEnoughSpace());
    ret = 2147483647;
    std::multiset<int>::iterator head = this->ms.begin();
    std::multiset<int>::iterator next = ++this->ms.begin();
    ret = std::abs(*head++ - *next++);
    while (next != this->ms.end())
    {
        if (ret > std::abs(*head - *next))
            ret = std::abs(*head - *next);
        head++;
        next++;
    }
    return (ret);
}
long long Span::longestSpan(void) const
{
    if(this->ms.size() <= 1)
        throw (Span::NotEnoughSpace());
    return (std::abs(this->max_numb - this->min_numb));
}