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

int main()
{
    try
    {
        Bureaucrat bu("first", 140);
        Bureaucrat bu2("second" , 3);
        std::cout << bu << std::endl << bu2 << std::endl;
        bu2.downGrade();
        bu.upGrade();
        bu.upGrade();
        bu2.upGrade();
        bu2.upGrade();
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    return (0);
}