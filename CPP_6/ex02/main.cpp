/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:40:42 by youlee            #+#    #+#             */
/*   Updated: 2021/02/24 21:01:59 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void)
{
    int cho = rand()%3;
    if (cho == 0) return (new A);
    if (cho == 1) return (new B);
    else    return (new C);
}
void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p) != NULL)
		std::cout<< "A\n" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout<< "B\n" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout<< "C\n" << std::endl;
}
void identify_from_reference( Base & p)
{
	identify_from_pointer(&p);
}
int main()
{
    srand(time(0));

	Base *first_base = generate();
	Base *second_base = generate();
	identify_from_pointer(first_base);
	identify_from_reference(*first_base);
	identify_from_pointer(second_base);
	identify_from_reference(*second_base);
    return (0);
}
