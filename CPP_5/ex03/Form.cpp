/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:47:19 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 14:47:20 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form &Form::operator=(const Form &fo)
{
    if (this == &fo)
        return (*this);
    this->sign = fo.getSigned();
    this->name = fo.getName();
    this->grade_required_to_sign = fo.get_req_sign_grade();
    this->grade_required_to_execute = fo.get_req_exec_grade();
    return (*this);
}
Form::Form(void) {}
Form::Form(bool si, std::string name, int grs, int gre) : sign(si), name(name), grade_required_to_sign(grs), grade_required_to_execute(gre)
{
    if (this->grade_required_to_sign < 1 || this->grade_required_to_execute < 1 ) (throw Form::GradeTooHighException());
    if (this->grade_required_to_sign > 150 || this->grade_required_to_execute > 150) (throw Form::GradeTooLowException());
}
Form::~Form() {}
Form::Form(const Form &fo) : sign(fo.sign), name(fo.name), grade_required_to_sign(fo.grade_required_to_sign), grade_required_to_execute(fo.grade_required_to_execute)
{
    if (this->grade_required_to_sign < 1 || this->grade_required_to_execute < 1 ) (throw Form::GradeTooHighException());
    if (this->grade_required_to_sign > 150 || this->grade_required_to_execute > 150) (throw Form::GradeTooLowException());
}
std::string Form::getName() const { return (this->name); }
bool        Form::getSigned() const { return (this->sign); }
int         Form::get_req_sign_grade() const { return (this->grade_required_to_sign); }
int         Form::get_req_exec_grade() const { return (this->grade_required_to_execute); }
const char* Form::GradeTooHighException::what() const throw(){ return ("Grade Too High Form!!"); }
const char* Form::GradeTooLowException::what() const throw(){ return ("Grade Too Low Form!!"); }
void        Form::beSigned(const Bureaucrat &bu)
{
    if (bu.getGrade() <= this->get_req_sign_grade())
        this->sign = true;
    else
        throw Form::GradeTooLowException();
}
std::ostream &operator<<(std::ostream &os, Form &fo)
{
    if (fo.getSigned())
        os << "this " << fo.getName() << " signed ";
    else
        os << "this " << fo.getName() << " unsigned ";
    os << "required to sign " << fo.get_req_sign_grade() << " required to execute " << fo.get_req_exec_grade() << std::endl;
    return (os);
}
std::string Form::getType() const
{
    return (this->type);
}
void Form::setType(std::string type)
{
    this->type = type;
}
void Form::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->get_req_exec_grade())
        throw Form::GradeTooLowException();
    if (this->getSigned() == false)
        std::cout << "Not Sign! Form!";
}