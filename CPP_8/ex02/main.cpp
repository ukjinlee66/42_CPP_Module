/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 03:57:45 by youlee            #+#    #+#             */
/*   Updated: 2021/02/25 15:33:43 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); 
    mstack.push(5); 
    mstack.push(737);
    mstack.pop();
    MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Show Mutant stack elements!\n";
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    std::cout << "Copy stack!\n";
    std::stack<int> s(mstack); 
    std::cout << "Show Copy stack elements!\n";
    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}
