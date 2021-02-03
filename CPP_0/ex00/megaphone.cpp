/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:24:19 by youlee            #+#    #+#             */
/*   Updated: 2021/02/03 13:24:23 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i=1;i<argc;i++)
        {
            std::string str(argv[i]);
            for (size_t j=0;j<str.size();j++)
            {
                str[j] = std::toupper(str[j]);
                std::cout << str[j];
            }
            std::cout<< "\n";
        }
    }
    return (0);
}