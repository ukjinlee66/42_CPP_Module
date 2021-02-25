/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 03:57:41 by youlee            #+#    #+#             */
/*   Updated: 2021/02/25 03:57:43 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <algorithm>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{    
    public:        
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &mu) : std::stack<T>(mu) {}
        MutantStack(const std::stack<T> &st) : std::stack<T>(st) {}
        MutantStack &operator=(const MutantStack &mu)
        {
            if (this == &mu)
                return (*this);
            this->c = mu.c;
            return (*this);
        }
        virtual ~MutantStack() {}
        //iterator function
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        iterator begin(){ return ( this->c.begin()); }
        iterator end() { return ( this->c.end()); }
        const_iterator begin() const { return ( this->c.begin()); }
        const_iterator end() const { return ( this->c.end()); }
        reverse_iterator rbegin() { return ( this->c.rbegin()); }
        reverse_iterator rend() { return ( this->c.rend()); }
        const_reverse_iterator rbegin() const { return ( this->c.rbegin()); }
        const_reverse_iterator rend() const { return ( this->c.rend()); }
};
#endif
