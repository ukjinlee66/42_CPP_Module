/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 19:03:04 by youlee            #+#    #+#             */
/*   Updated: 2021/02/22 20:39:17 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

struct Data
{
    std::string s1;
    int         n;
    std::string s2;
};

void *serialize(void)
{
    Data *D = new Data();
    srand(time(0));
    static char ch[] = "a2cd4fghi3kl5no7";
    D->n = rand() % 123456;
    D->s1.resize(9);
    D->s2.resize(9);
    for(int i=0; i<8; i++)
    {
        D->s1[i] += ch[rand() % 16];
        D->s2[i] += ch[rand() % 16];
    }
    return (D);    
}

Data *deserialize(void * raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
    void* dum;
    Data* dum2;
    dum = serialize();
    dum2 = deserialize(dum);
	std::cout << " string size : " << sizeof(std::string) 
		<< " int size : " << sizeof(int) << std::endl;

    std::cout<<"s1 : " << dum2->s1 << "\ns2 : " << dum2->s2 << "\nnum : " << dum2->n << std::endl;
    delete dum2;
    return (0);
}
