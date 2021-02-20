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

Squad::Squad(void) : list(NULL), cnt(0)
{

}
Squad::~Squad(void)
{
    unit *next;

    for (int i=0; i < this->getCount(); i++)
    {
        next = this->list->next;
        delete this->list->marine;
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
    this->cnt = sq.cnt;
    return (*this);
}
int Squad::getCount() const
{
    return (this->cnt);
}
ISpaceMarine* Squad::getUnit(int n) const
{
    int cn=0;
    unit *list2 = this->list;
    ISpaceMarine *ret;

    if (list2 == NULL || n < 0)
        return (NULL);
    while (list2)
    {
        if (cn == n)
        {
            if (list2)
                ret = list2->marine;
            else
                ret = NULL;
            return (ret);
        }
        cn++;
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
        this->cnt++;
    }
    else
    {
        while (this->list->next)
            this->list = this->list->next;
        this->list->next = new unit;
        this->list->next->marine = sm;
        this->list->next->next = NULL;
        this->cnt++;
    }
    return (0);
}