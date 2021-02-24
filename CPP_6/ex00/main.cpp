/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:48:25 by youlee            #+#    #+#             */
/*   Updated: 2021/02/23 23:06:58 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cctype>

void strtochar(double num)
{
    std::cout<<"char: ";
    if (std::isnan(num) != 0)
        std::cout<<"impossible"<<std::endl;
    else if (33 > num || 126 < num)
        std::cout<<"Non displayable"<<std::endl;
    else
        std::cout<< "'" << static_cast<char>(num)<< "'" << std::endl;
}

void strtoint(double num)
{
    std::cout<<"int: ";
    if (std::isnan(num) != 0)
        std::cout<<"impossible"<<std::endl;
    else if (INT_MAX < num || INT_MIN > num)
        std::cout<<"Non displayable"<<std::endl;
    else
        std::cout<<static_cast<int>(num)<<std::endl;
}

void strtofloat(double num)
{
    std::cout<<"float: ";
    if (std::isnan(num) != 0)
        std::cout<<"nanf"<<std::endl;
    else if (floor(num) == num)
        std::cout<<static_cast<float>(num) << ".0f" << std::endl;
    else
        std::cout<<static_cast<float>(num) << "f" << std::endl;
}

void strtodouble(double num)
{
    std::cout<<"double: ";
    if (num == floor(num))
        std::cout<<num<<".0"<<std::endl;
    else
        std::cout<<num<<std::endl;
}

void Convert(char *argv)
{
    double in;
    std::string str(argv); //convert char* to string
    in = std::stod(str); // convert string to double
	if (str == "+inf" || str == "+inff" || str == "inf" || str == "inff")
		in = static_cast<double>(INFINITY);
	if (str == "-inf" || str == "-inff")
		in = static_cast<double>(-INFINITY);
    strtochar(in);
    strtoint(in);
    strtofloat(in);
    strtodouble(in);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error : This program can only accept one string!" << std::endl;
        return (1);
    }
    else
        Convert(argv[1]);
    return (0);
}
