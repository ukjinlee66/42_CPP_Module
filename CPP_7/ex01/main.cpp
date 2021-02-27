/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:17:08 by youlee            #+#    #+#             */
/*   Updated: 2021/02/23 17:36:27 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
int main()
{
	char ar[5] = "aBCd";
	iter(ar, 4, display);
	std::cout << std::endl;
	std::string str[2] = {"abbb", "cddd"};
	iter(str, 2, display);
	std::cout << std::endl;
	return (0);
}
