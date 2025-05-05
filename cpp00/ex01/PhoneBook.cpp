/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:32:38 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/05 16:44:48 by kpedro           ###   ########.fr       */
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

static  void    print_contact(std::string string)
{
    if (string.length() > 10)
       std::cout << string.substr(0, 9) << ". " << "|";
    else
        std::cout << std::setw(10) << string << "|";
}

static  void    print_contact_fields(Contact *contact, int cont_numbers)
{
    int index;

    std::cout << "Typ the contact index you want to see" << std::endl;
    std::cin >> index;
    system("clear");
    if (index > 0 && index <= cont_numbers)
    {
            std::cout << "Index: " << index << std::endl;
            std::cout << "Name: " << contact[index - 1].get_fname() + " " + contact[index - 1].get_lname() << std::endl;
            std::cout << "Nickname: " << contact[index - 1].get_nname() << std::endl;
            std::cout << "Dark Secret: " << contact[index - 1].get_dark_secret() << std::endl;
            std::cout << "Phone Number: " << contact[index - 1].get_number() << std::endl;
    }
    else
    {
            std::cout << "Indice invalido" << std::endl;
    }
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
            std::cout << std::setw(10) << i + 1 << "|";
            print_contact(this->contacts[i].get_fname());
            print_contact(this->contacts[i].get_lname());
            print_contact(this->contacts[i].get_nname());
            std::cout << std::endl;
    }
    print_contact_fields(this->contacts, this->cont_numbers);
}
