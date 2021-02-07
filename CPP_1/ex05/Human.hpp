/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:30:18 by youlee            #+#    #+#             */
/*   Updated: 2021/02/07 17:30:20 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
    private:
        const Brain br;
    public:
        std::string identify(void) const;
        const Brain& getBrain(void) const;
        Human(void);
        ~Human(void);
};

#endif

