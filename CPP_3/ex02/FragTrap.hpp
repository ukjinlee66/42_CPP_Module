/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 02:58:57 by youlee            #+#    #+#             */
/*   Updated: 2021/02/12 02:58:58 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
private:
public:
	void		vaulthunter_dot_exe(std::string const& target);
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &f);
	FragTrap &operator=(FragTrap const &f);
	~FragTrap(void);
};
#endif