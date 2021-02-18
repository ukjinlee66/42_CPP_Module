/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:34:23 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:34:24 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : list(NULL)
{

}
Squad::~Squad(void)
{
    unit *next;
    for (int i=0;i<this->getCount();i++)
    {
        next = this->list->next;
        delete this->list->next;
        delete this->list;
        this->list = next;
    }
}
Squad::Squad(const Squad &sq)
{
    unit *head;
    unit *cur_list;
    unit *cur_list_next;
    unit *copy_list = sq.list;
    
    cur_list = this->list;
    cur_list_next = cur_list->next;
    head = cur_list;

    for(int i=0;i < this->getCount();i++)
    {
        delete cur_list;
        cur_list = cur_list_next;
        cur_list_next = cur_list->next;
    }
    cur_list = head;

    for(int i=0;i< this->getCount();i++)
    {
        ISpaceMarine *temp = copy_list->marine->clone();
        this->push(temp);
        copy_list = copy_list->next;
    }
    delete sq.list;
}
Squad &Squad::operator=(const Squad &sq)
{
    if (this == &sq)
        return (*this);
    this->list = sq.list;
    return (*this);
}
int Squad::getCount() const
{
    int cnt=0;

    unit *list2 = this->list;
    if (list2 == NULL)
        return (0);
    while (list2->next != NULL)
    {
        cnt++;
        list2 = list2->next;
    }
    return (cnt + 1);
}
ISpaceMarine* Squad::getUnit(int n) const
{
    int cnt=0;

    unit *list2 = this->list;
    ISpaceMarine *ret;
    if (list2 == NULL)
        return (NULL);
    while (list2->next != NULL)
    {
        if (cnt == n)
        {
            if (list2)
                ret = list2->marine;
            else
                ret = NULL;
            return (ret);
        }
        cnt++;
        list2 = list2->next;
    }
    return (NULL);
}
int Squad::push(ISpaceMarine *sm)
{
    if (!sm)
        return (1);
    if (!this->list)
    {
        this->list = new unit;
        this->list->marine = sm;
        this->list->next = NULL;
    }
    else
    {
        while (this->list->next != NULL)
            this->list = this->list->next;
        this->list->next = new unit;
        this->list = this->list->next;
        this->list->marine = sm;
        this->list->next = NULL;
    }
    return (0);
}