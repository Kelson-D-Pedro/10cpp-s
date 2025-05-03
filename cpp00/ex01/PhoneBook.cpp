/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:32:38 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/03 16:30:27 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->cont_numbers = 0;
    this->older_index = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Phonebook deleted" << std::endl;
}

void PhoneBook::add_contact(Contact new_contact)
{
    int index;

    if (this->cont_numbers < 8)
        this->cont_numbers++;
    index = this->older_index % 8;
    this->contacts[index] = new_contact;
    this->older_index++;
}

static void print_contact(std::string string)
{
    if (string.length() > 10)
       std::cout << string.substr(0, 9) << ". " << "|";
    else
        std::cout << std::setw(10) << string << "|";
}

void    PhoneBook::search_contact()
{
   print_contact("Index");
   print_contact("First name");
   print_contact("Last name");
   print_contact("Nick name");
   std::cout << std::endl;
   for (int i = 0; i < this->cont_numbers; i++)
   {
        std::cout << std::setw(10) << i << "|";
        print_contact(this->contacts[i].get_fname());
        print_contact(this->contacts[i].get_lname());
        print_contact(this->contacts[i].get_nname());
        std::cout << std::endl;
   }
}
