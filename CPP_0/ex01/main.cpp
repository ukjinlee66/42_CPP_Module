/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 23:39:23 by youlee            #+#    #+#             */
/*   Updated: 2021/02/03 23:42:38 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    std::string input;
    Book user[8];
    int i;
    
    init_user(user);
    while (1)
    {
        std::cout<<"\n>";
        std::getline(std::cin, input);
        if (input == "EXIT")
            exit(0);
        else if (input == "SEARCH")
        {
            for(i=0;i<8;i++)
            {
                if (user[i].exist == true)
                {
                    std::cout<<std::setw(10)<<std::right<<i<<"|";
                    print_info(user[i]);
                }
            }
            select_info(user);
        }
        else if (input == "ADD")
        {
            if (check_full(user))
                print_err();
            else
            {
                for(int i=0;i<8;i++)
                {
                    if (user[i].exist == false)
                    {
                        std::string info;
                        user[i].exist=true;

                        std::cout<<"Please enter your first_name\n";
                        std::getline(std::cin, info);
                        user[i].set_first_name(info);

                        std::cout<<"Please enter your last_name\n";
                        std::getline(std::cin, info);
                        user[i].set_last_name(info);

                        std::cout<<"Please enter your nickname\n";
                        std::getline(std::cin, info);
                        user[i].set_nickname(info);

                        std::cout<<"Please enter your login\n";
                        std::getline(std::cin, info);
                        user[i].set_login(info);

                        std::cout<<"Please enter your postal address\n";
                        std::getline(std::cin, info);
                        user[i].set_postal_address(info);

                        std::cout<<"Please enter your email address\n";
                        std::getline(std::cin, info);
                        user[i].set_email_address(info);

                        std::cout<<"Please enter your phone number\n";
                        std::getline(std::cin, info);
                        user[i].set_phone_number(info);

                        std::cout<<"Please enter your birthday date\n";
                        std::getline(std::cin, info);
                        user[i].set_birthday_date(info);

                        std::cout<<"Please enter your favorite meal\n";
                        std::getline(std::cin, info);
                        user[i].set_favorite_meal(info);

                        std::cout<<"Please enter your underwear color\n";
                        std::getline(std::cin, info);
                        user[i].set_underwear_color(info);

                        std::cout<<"Please enter your darkest secret\n";
                        std::getline(std::cin, info);
                        user[i].set_darkest_secret(info);

                        std::cout<<"Setup is complete\n";
                        break;
                    }
                }
            }
        }
    }
    return (0);
}
