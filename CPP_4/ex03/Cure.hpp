/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:24 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:25 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &cu);
        virtual ~Cure();
        Cure &operator=(const Cure &cu);
        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif