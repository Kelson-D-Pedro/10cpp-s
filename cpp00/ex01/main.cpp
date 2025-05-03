/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:19:52 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/03 18:04:35 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

static  void    fill_contact_fields(Contact *contact)
{
    std::string string;

    std::cout << "Insira o primeiro nome" << std::endl;
    std::cin >> string;
    if (string.empty())
        exit(1);
    contact->set_fname(string);
    std::cout << "Insira o sobrenome nome" << std::endl;
    std::cin >> string;
    contact->set_lname(string);
    std::cout << "Insira o apelido" << std::endl;
    std::cin >> string;
    contact->set_nname(string);
    std::cout << "Insira um segredo" << std::endl;
    std::cin >> string;
    contact->set_dark_secret(string);
    std::cout << "Insira o numero de telefone" << std::endl;
    std::cin >> string;
    contact->set_number(string);
}

int main()
{
    PhoneBook phonebook;
    Contact contact;
    std::string comand;
    std::string teste;

    do
    {
        std::cin >> comand;
        if (comand.compare("ADD") == 0)
        {
            fill_contact_fields(&contact);
            phonebook.add_contact(contact);
            system("clear");
        }
        else if (comand.compare("SEARCH") == 0)
        {
            phonebook.search_contact();
        }
        
    } while (comand.compare("EXIT") != 0);
    

    return 0;
}
