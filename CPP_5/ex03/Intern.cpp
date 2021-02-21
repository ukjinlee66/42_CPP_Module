/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 01:16:19 by youlee            #+#    #+#             */
/*   Updated: 2021/02/21 01:16:21 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}
Intern::Intern(const Intern &in) { *this = in; }
Intern &Intern::operator=(const Intern &in)
{
    if (this == &in)
        return (*this);
    return (*this);
}
Intern::~Intern(void) {}
const char* Intern::FormNotExist::what() const throw() { return ("Form is not correct name!");}
Form *makeShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}
Form *makeRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}
Form *makePardon(std::string target)
{
	return new PresidentialPardonForm(target);
}
Form* Intern::makeForm(std::string const &name, std::string const &target)
{
    static struct Pair _pair[3] = {{"presidential pardon", makePardon}, 
    {"robotomy request", makeRobotomy}, 
    {"shrubbery creation", makeShrubbery}};

    for(int i=0;i<3;i++)
    {
        if (name == _pair[i].name)
        {
            std::cout << "Intern creates " << name << std::endl;
			return _pair[i].func(target);
        }
    }
    throw (Intern::FormNotExist());
    return (NULL);
}