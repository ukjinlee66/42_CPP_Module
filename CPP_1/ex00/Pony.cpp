/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:49 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 16:37:50 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Pony.hpp"

void ponyOnTheHeap(void)
{
    Pony *p;

    p = new Pony("Dynamic object!", 3); //Dynamic allocation
    std::cout<<"my name : " << p->get_name() << "\n";
    std::cout<<"my number : " << p->get_number() << "\n";

    std::cout<<"delete Dynamic object!\n";
    delete(p);
}

void ponyOnTheStack(void)
{
    Pony p("Stack object!", 5);
    std::cout<<"my name : " << p.get_name() << "\n";
    std::cout<<"my number : " << p.get_number() << "\n";

    std::cout<<"delete Static object!\n";
}

void Pony::set_name(std::string name)
{
    this->name = name;
}
std::string Pony::get_name(void)
{
    return (this->name);
}
void Pony::set_number(int num)
{
    this->number = num;
}
int  Pony::get_number(void)
{
    return (this->number);
}