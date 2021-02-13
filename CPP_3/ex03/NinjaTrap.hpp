/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 00:25:09 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 00:25:13 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class NinjaTrap : public ClapTrap
{
private:
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &f);
	NinjaTrap &operator=(NinjaTrap const &f);
	~NinjaTrap(void);
    void ninjaShoebox(FragTrap &tr);
    void ninjaShoebox(ClapTrap &tr);
    void ninjaShoebox(NinjaTrap &tr);
    void ninjaShoebox(ScavTrap &tr);
};
#endif
