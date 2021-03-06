/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:29:53 by youlee            #+#    #+#             */
/*   Updated: 2021/02/07 17:29:54 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

std::string Brain::identify(void) const
{
    std::stringstream stream;

	stream << std::showbase << std::hex;
	stream << std::uppercase << (long)this;
	std::string ret = stream.str();
	ret[0] = '0';
	ret[1] = 'x';
	return (ret);
}

Brain::Brain(void)
{

}
Brain::~Brain(void)
{

}
