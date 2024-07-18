/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annamarianunes <annamarianunes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:39:33 by annamarianu       #+#    #+#             */
/*   Updated: 2024/07/18 16:59:35 by annamarianu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

std::string TrimString(std::string str) // retira todos os espacos em branco no inicio e fim da frase.
{
    while (!str.empty() && ::isspace(str.front()))
        str.erase(0,1);
    while(!str.empty() && std::isspace(str.back()))
        str.pop_back();
    return str;
    
}

int ConvertToInt(std::string str)//converter string para um inteiro, ignorando todos os zeros a esquerda
{
    str.erase(0,str.find_first_not_of('0'));
    if(str.empty())
        return 0;
    return(std::atoi(str.c_str()));
}

std::string GetLine(std::string prompt)
{
    std::string str;

    std::cout << prompt;
    std::getline(std::cin, str);
    str = TrimString(str);
    while(str.empty())
    {
        std::cout << prompt;
        std::getline(std::cin, str);
        str = TrimString(str);
    }
    return(str);
}
void DisplayHelp() {
    std::cout << "Available commands:" << std::endl;
    std::cout << "ADD - Add a new contact" << std::endl;
    std::cout << "SEARCH - Search for a contact" << std::endl;
    std::cout << "EXIT - Exit the program" << std::endl;
}

int main()
{
    std::string command;
    PhoneBook book;
    
    command = GetLine("Enter a command: ");
    while(command != "EXIT")
    {
        if(command == "ADD")
            book.Add();
        else if(command == "SEARCH")
            book.Search();
        else 
        {
            std::cout << "Invalid Command." << std::endl;
            DisplayHelp();
        }
        command = GetLine("Enter a command: ");
    }
    std::cout << "Exiting the program. Goodbye" << std::endl;
    return 0;
}