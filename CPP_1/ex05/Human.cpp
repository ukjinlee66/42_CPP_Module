/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:30:12 by youlee            #+#    #+#             */
/*   Updated: 2021/02/07 17:30:13 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain& Human::getBrain(void) const
{
    return (this->br);
}

std::string Human::identify(void) const
{
    return(this->getBrain().identify());
}

Human::Human(void)
{

}
Human::~Human(void)
{

}