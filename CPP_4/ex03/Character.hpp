/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:36 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:37 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inven[4];
    public:
        Character(std::string name);
        Character(const Character &ch);
        Character &operator=(const Character &ch);
        virtual ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
#endif