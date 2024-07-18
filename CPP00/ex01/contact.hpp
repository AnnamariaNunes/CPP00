/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annamarianunes <annamarianunes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:02:50 by annamarianu       #+#    #+#             */
/*   Updated: 2024/07/15 19:16:30 by annamarianu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private:
        int index;
        int IsEmpty;
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;

    public:
        Contact();
        int GetEmpty(void);
        void SetIndex(int index);
        void CreateContact(int id,std::string first_name,std::string last_name,std::string nickname,std::string phone_number,std::string darkest_secret);
        void DisplayContact();
        void DisplayPhoneBook();
        static void PrintFormatted(std::string name); 
};

#endif