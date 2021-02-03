/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 23:39:11 by youlee            #+#    #+#             */
/*   Updated: 2021/02/03 23:42:31 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Book::set_first_name(std::string name)
{
    this->first_name = name;
}

std::string Book::get_first_name(void)
{
    return (this->first_name);
}

void Book::set_last_name(std::string name)
{
    this->last_name = name;
}

std::string Book::get_last_name(void)
{
    return (this->last_name);
}

void Book::set_nickname(std::string name)
{
    this->nickname = name;
}

std::string Book::get_nickname(void)
{
    return (this->nickname);
}

void Book::set_login(std::string name)
{
    this->login = name;
}

std::string Book::get_login(void)
{
    return (this->login);
}

void Book::set_postal_address(std::string name)
{
    this->postal_address = name;
}

std::string Book::get_postal_address(void)
{
    return (this->postal_address);
}

void Book::set_email_address(std::string name)
{
    this->email_address = name;
}

std::string Book::get_email_address(void)
{
    return (this->email_address);
}

void Book::set_phone_number(std::string name)
{
    this->phone_number = name;
}

std::string Book::get_phone_number(void)
{
    return (this->phone_number);
}

void Book::set_birthday_date(std::string name)
{
    this->birthday_date = name;
}

std::string Book::get_birthday_date(void)
{
    return (this->birthday_date);
}

void Book::set_favorite_meal(std::string name)
{
    this->favorite_meal = name;
}

std::string Book::get_favorite_meal(void)
{
    return (this->favorite_meal);
}

void Book::set_underwear_color(std::string name)
{
    this->underwear_color = name;
}

std::string Book::get_underwear_color(void)
{
    return (this->underwear_color);
}

void Book::set_darkest_secret(std::string name)
{
    this->darkest_secret = name;
}

std::string Book::get_darkest_secret(void)
{
    return (this->darkest_secret);
}

void print_info(Book user)
{
    if (user.get_first_name().length() >= 10)
        (user.get_first_name())[10] = '.';
    std::cout<<std::setw(10)<<std::right<<user.get_first_name()<<"|";
    if (user.get_last_name().length() >= 10)
         user.get_last_name()[10] = '.';
    std::cout<<std::setw(10)<<std::right<<user.get_last_name()<<"|";
    if (user.get_nickname().length() >= 10)
        user.get_nickname()[10] = '.';
    std::cout<<std::setw(10)<<std::right<<user.get_nickname();
}

void init_user(Book user[8])
{
    for(int i=0;i<8;i++)
        user[i].exist = false;
}

bool check_full(Book user[8])
{
    for (int idx = 0; idx < 8; idx++)
        if (user[idx].exist == false)
            return (false);
    return (true);
}

void print_err(void)
{
    std::cout<<"No more users can be added!\n";
}