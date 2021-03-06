/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:43:15 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 13:43:17 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(void){}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (this->_grade < 1) throw (Bureaucrat::GradeTooHighException());
    if (this->_grade > 150) throw (Bureaucrat::GradeTooLowException());
}
Bureaucrat::Bureaucrat(const Bureaucrat & bu) : _name(bu._name), _grade(bu._grade){
    if (this->_grade < 1) throw (Bureaucrat::GradeTooHighException());
    if (this->_grade > 150) throw (Bureaucrat::GradeTooLowException());
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bu)
{
    if (this == &bu)
        return (*this);
    this->_name = bu.getName();
    this->_grade = bu.getGrade();
    return (*this);
}
std::string Bureaucrat::getName() const { return (this->_name); }
int Bureaucrat::getGrade() const { return (this->_grade); }
const char* Bureaucrat::GradeTooHighException::what() const throw(){ return ("Grade Too High!!"); }
const char* Bureaucrat::GradeTooLowException::what() const throw(){ return ("Grade Too Low!!"); }
void Bureaucrat::upGrade() 
{ 
    this->_grade-=10; 
    if (this->_grade < 0) throw (Bureaucrat::GradeTooHighException()); 
}
void Bureaucrat::downGrade() 
{ 
    this->_grade+=10; 
    if (this->_grade > 150) throw (Bureaucrat::GradeTooLowException()); 
}
std::ostream &operator<<(std::ostream &os, Bureaucrat &bu)
{
    os << "<" << bu.getName() << ">" << ", bureaucrat grade <" << bu.getGrade() << ">" << std::endl;
    return (os);
}