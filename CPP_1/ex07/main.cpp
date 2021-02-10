/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 00:54:11 by youlee            #+#    #+#             */
/*   Updated: 2021/02/09 00:54:12 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc !=4)
    {
        std::cout<<"wrong input file!\n";
    }
    else
    {
        std::ifstream readFile;
        std::ofstream writeFile;
        std::string filename = argv[1];
        std::string line;
        std::string::size_type idx = 0;

        if (argv[2] == NULL || argv[3] == NULL)
        {
            std::cout<< "input string empty error!\n";
            return (1);
        }
        std::string s1(argv[2]);
        std::string s2(argv[3]);
        readFile.open(filename.c_str());
        if (readFile.is_open() == false)
        {
            std::cout<< "open file error!\n";
            return (1);
        }
        writeFile.open(filename + ".replace");
        if (readFile.is_open())
        {
            while (std::getline(readFile, line))
            {
                while ((idx = line.find(s1)) != std::string::npos)
                {
                    line.replace(idx, s1.length(), s2);
                    idx += s2.length();
                }
                writeFile<<line<<std::endl;
            }
        }
        readFile.close();
        writeFile.close();
    }
    return (0);
}
