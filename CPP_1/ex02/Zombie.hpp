/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:20:19 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 17:20:20 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
        std::string type;
    public:
        void announce(void);
        void set_name(std::string name);
        std::string get_name(void);
        Zombie(std::string name, std::string type);
        ~Zombie(void);
};
