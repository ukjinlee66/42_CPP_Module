/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:40:42 by youlee            #+#    #+#             */
/*   Updated: 2021/02/22 20:40:43 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
Base * generate(void)
{
    int cho = rand()%3;
    if (cho == 0) return (new A);
    if (cho == 1) return (new B);
    else    return (new C);
}
void identify_from_pointer(Base * p)
{
    
}
void identify_from_reference( Base & p)
{

}
int main()
{
    srand(time(0));
    return (0);
}