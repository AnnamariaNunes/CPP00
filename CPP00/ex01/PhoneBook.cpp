/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annamarianunes <annamarianunes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:24:51 by annamarianu       #+#    #+#             */
/*   Updated: 2024/07/18 16:41:49 by annamarianu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ConvertToInt(std::string str);
std::string GetLine(std::string prompt);


PhoneBook::PhoneBook()
{
    for(int i = 0;i < 8; i++)
        this->List[i].SetIndex(i + 1);
}
int PhoneBook::Find_Last(void)
{
    for(int i = 0;i < 8;i++)
    {
        if(this->List[i].GetEmpty())
            return(i);
    }
    return(8);
}
void PhoneBook::Rotate_Contacts(void)//aqui a ideia é bem parecida com o push swap mas a diferença
                                        // é basicamente que eu vou deslocar tudo para direita e o ultimo será sobrescrito. 
{
    for(int i = 7; i > 0; i--)
    {
        this->List[i] = this->List[i - 1];
        this->List[i].SetIndex(i + 1);
    }
}

void PhoneBook::DisplayAllContacts(void)
{
    for(int i = 0; i < 8; i++)
        this->List[i].DisplayPhoneBook();
}

void PhoneBook::Search()
{
    int index;
    this->DisplayAllContacts();
    if(this->Find_Last() == 0)
    {
        index = ConvertToInt(GetLine("No Contacts available"));
        return;
    }
    index = ConvertToInt(GetLine("Index of the Contact(1-8) >"));
    while(index < 1 || index > 8)
        index = ConvertToInt(GetLine("Invalid Index. Please Enter a number between 1 and 8 > "));
    while(1)
    {
        for(int i = 0;i < 8; i++)
        {
            if(i + 1 == index && !this->List[i].GetEmpty())
            {
                this->List[i].DisplayContact();
                return;
            }
        }
        index = ConvertToInt(GetLine("The Selected Index is empty, please try again"));
    }
}
void PhoneBook::Add()
{
    Contact new_contact;
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string Number;
    std::string secret;

    FirstName = GetLine("FirstName: ");
    LastName = GetLine("LastName: ");
    Nickname = GetLine("NickName: ");
    Number = GetLine("Number: ");
    secret = GetLine("Secret: ");
    new_contact.CreateContact(1,FirstName,LastName,Nickname,Number,secret);
    this->Rotate_Contacts();
    this->List[0] = new_contact;
}


