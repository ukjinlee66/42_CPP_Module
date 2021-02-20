/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:43:10 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 13:43:12 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private:
        std::string _name;
        int         _grade;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat & bu);
        Bureaucrat(void);
        Bureaucrat &operator=(const Bureaucrat &bu);
        virtual ~Bureaucrat();
        class GradeTooHighException : public std::exception{
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
                virtual const char* what() const throw();
        };
        std::string getName() const;
        int getGrade() const;
        void upGrade();
        void downGrade();
};
std::ostream &operator<<(std::ostream &os, Bureaucrat &bu);
#endif