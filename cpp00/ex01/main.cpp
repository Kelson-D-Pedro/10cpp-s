/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:19:52 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/14 13:27:06 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <unistd.h>

static  std::string generic_auxiliar_function(const std::string message)
{
    std::string input;

    std::cout << message << std::endl;
    if (!std::getline(std::cin, input))
    {
        std::cout << "EOF Forcado, o programa ira encerrar por aqui" << std::endl;
        std::exit(1);
    }
    while (input.empty())
    {
        std::cout << "Insira um texto valido" << std::endl;
        std::getline(std::cin, input);
    }
    return (input);
}

static  int verify_number(std::string input)
{
    std::string numbers = "0123456789";

    for (int i = 0; i < 10; i++)
    {
        if (input.find(numbers[i]) != std::string::npos)
            return (0);
    }
    return (1);
}

static  int    fill_contact_fields(Contact *contact)
{
    std::string input;

    input = generic_auxiliar_function("Insira o numero de telefone");
    if (!verify_number(input) && input.length() == 9)
        contact->set_number(input);
    else
    {
        std::cout << "Numero Invalido o Numero Nao Sera Gravado" << std::endl;
        usleep(5000 * 300);
        return (0);
    }
    input = generic_auxiliar_function("Insira o primeiro nome");
    contact->set_fname(input);
    input = generic_auxiliar_function("Insira o sobrenome nome");
    contact->set_lname(input);
    input = generic_auxiliar_function("Insira o apelido");
    contact->set_nname(input);
    input = generic_auxiliar_function("Insira um segredo");
    contact->set_dark_secret(input);
    return (1);
}

int main()
{
    PhoneBook phonebook;
    Contact contact;
    std::string comand;

    do
    {
        std::cout << "1 - ADD" << std::endl;
        std::cout << "2 - SEARCH" << std::endl;
        std::cout << "3 - EXIT" << std::endl;
        if (!std::getline(std::cin, comand))
        {
            std::cout << "EOF Forcado, o programa ira encerrar por aqui" << std::endl;
            std::exit(1);
        }
        system("clear");
        if (comand.compare("ADD") == 0)
        {
            if (fill_contact_fields(&contact))
                phonebook.add_contact(contact);
            system("clear");
        }
        else if (comand.compare("SEARCH") == 0)
        {
            phonebook.search_contact();
            usleep(5000 * 1000);
        }
    } while (comand.compare("EXIT") != 0);
    return 0;
}
