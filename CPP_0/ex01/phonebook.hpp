/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 23:39:00 by youlee            #+#    #+#             */
/*   Updated: 2021/02/03 23:39:02 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>

class Book
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		bool exist;
		void set_exist(bool b);
		void set_first_name(std::string name);
		std::string get_first_name(void);
		void set_last_name(std::string name);
		std::string get_last_name(void);
		void set_nickname(std::string name);
		std::string get_nickname(void);
		void set_login(std::string name);
		std::string get_login(void);
		void set_postal_address(std::string name);
		std::string get_postal_address(void);
		void set_email_address(std::string name);
		std::string get_email_address(void);
		void set_phone_number(std::string name);
		std::string get_phone_number(void);
		void set_birthday_date(std::string name);
		std::string get_birthday_date(void);
		void set_favorite_meal(std::string name);
		std::string get_favorite_meal(void);
		void set_underwear_color(std::string name);
		std::string get_underwear_color(void);
		void set_darkest_secret(std::string name);
		std::string get_darkest_secret(void);
};
void print_info(Book use);
void init_user(Book user[8]);
bool check_full(Book user[8]);
void print_err(void);
void select_print(Book user);
void select_info(Book user[8]);