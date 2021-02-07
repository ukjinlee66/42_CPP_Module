/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:22:36 by youlee            #+#    #+#             */
/*   Updated: 2021/02/07 17:22:48 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *pstr = &str;
    std::string &str2 = str;

    std::cout<< "str : " << str << "\n" <<
    "*pstr : " << *pstr << "  pstr : " << pstr << "\n"
    "&str2 : " << &str2 << "  str2 : " << str2 << "\n";
}