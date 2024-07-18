/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annamarianunes <annamarianunes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:21:02 by annamarianu       #+#    #+#             */
/*   Updated: 2024/07/18 16:37:31 by annamarianu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include "contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>


class PhoneBook
{
  private:
    Contact List[8];
  public:
    PhoneBook();
    int Find_Last();
    void Add();
    void Search();
    void Rotate_Contacts();
    void DisplayAllContacts();
};

#endif