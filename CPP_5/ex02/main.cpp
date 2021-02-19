/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:43:20 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 13:43:21 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form fo1(false, "first", 10, 30);
        std::cout << fo1 <<std::endl;
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
        Form fo2(false, "second", 0, 30);
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
        Form fo3(false, "third", 10, 200);
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    Bureaucrat bu("bu1", 5);
    Bureaucrat bu2("bu1", 35);
    Form fo4(false, "fo4", 10, 30);
    try
    {
        fo4.beSigned(bu);
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
        fo4.beSigned(bu2);
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    return (0);
}