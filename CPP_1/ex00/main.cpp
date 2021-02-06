/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:38:08 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 16:38:09 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main(void)
{
    std::cout<<"Create a static object of pony!\n";
    ponyOnTheStack();
    std::cout<<"Create a dynamic object of pony!\n";
    ponyOnTheHeap();
    std::cout<<"Exit the program!\n";
    return (0);
}