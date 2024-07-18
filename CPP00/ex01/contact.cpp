/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annamarianunes <annamarianunes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:58:09 by annamarianu       #+#    #+#             */
/*   Updated: 2024/07/15 19:16:43 by annamarianu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp" 

Contact::Contact()
{
    this->IsEmpty = 1;
    this->index = 0;
}

int Contact::GetEmpty(void)
{
    return (this->IsEmpty);
}

void Contact::SetIndex(int index)
{
    this->index = index;
}

void Contact::CreateContact(int id,std::string first_name,std::string last_name,std::string nickname,std::string phone_number,std::string darkest_secret)
{
    this->index = id;
    this->FirstName = first_name;
    this->LastName = last_name;
    this->Nickname = nickname;
    this->PhoneNumber = phone_number;
    this->DarkestSecret = darkest_secret;
    this->IsEmpty = 0;
}

void Contact::DisplayContact()
{
    std::cout << this->FirstName << std::endl;
    std::cout << this->LastName << std::endl;
    std::cout << this->Nickname << std::endl;
    std::cout << this->PhoneNumber << std::endl;
    std::cout << this->DarkestSecret << std::endl;
}
void Contact::PrintFormatted(std::string name)
{
    int len = name.length();
    if(len > 10)
    {
        name.erase(9, len - 9);
        name.append(1,'.');
    }
    std::cout << std::string(10 - name.length(),' ') << name << "|";
}

void Contact::DisplayPhoneBook()
{
   std::cout << std::setw(10) << index << "|";
   PrintFormatted(FirstName);
   PrintFormatted(LastName);
   PrintFormatted(Nickname);
   std::cout << std::endl;
}