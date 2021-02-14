/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:34:42 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 17:34:43 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    protected:
    public:
    SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &f);
    ~SuperTrap(void);
    void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
    SuperTrap   &operator=(SuperTrap const &f);
};

#endif
