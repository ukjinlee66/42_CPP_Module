/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:20:38 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 17:20:39 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

std::string Namepool[10]={"jason", "youlee", "junkang", "sseo", "hycho", "seoh", "seongwpa",
"yong-lee", "dson", "jeoryu"};

class ZombieEvent
{
    public:
        void set_type(std::string type);
        std::string get_type(void);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);
    private:
        std::string type;
};