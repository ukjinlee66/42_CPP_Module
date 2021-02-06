/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:59 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 16:38:01 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Pony
{
    private:
        std::string name;
        int         number;
    public:
        Pony() // default constructor
        {
            //default setting
            set_name("default");
            set_number(0);
        }
        Pony(std::string name, int number)
        {
            set_name(name);
            set_number(number);
        }
        void set_name(std::string name);
        std::string get_name(void);
        void set_number(int num);
        int  get_number(void);
};
void ponyOnTheStack(void);
void ponyOnTheHeap(void);