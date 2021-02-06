/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:20:13 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 17:20:14 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "<" << this->name << " (" << this->type<<")> " << "Braiiiiiiinnnssss...\n";
}
void Zombie::set_name(std::string name)
{
    this->name = name;
}
std::string Zombie::get_name(void)
{
    return (this->name);
}
Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}
Zombie::~Zombie(void)
{

}