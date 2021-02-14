/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 23:42:43 by youlee            #+#    #+#             */
/*   Updated: 2021/02/13 23:42:56 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap : public ClapTrap
{
private:
public:
	void		vaulthunter_dot_exe(std::string const& target);
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &f);
	ScavTrap &operator=(ScavTrap const &f);
	~ScavTrap(void);
    void challengeNewcomer(void);
};
#endif