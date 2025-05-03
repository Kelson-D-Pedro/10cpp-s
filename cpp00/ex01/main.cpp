/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:19:52 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/03 17:40:17 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

int main()
{
    PhoneBook phonebook;
    Contact contact;
    std::string comand;
    std::string teste;

    do
    {
        std::cin >> comand;
        if (comand.compare("ADD") == 0 || comand.compare("add") == 0)
        {
            std::cin >> teste;
            contact.set_fname(teste);
        }
    } while ((comand.compare("EXIT") != 0) && (comand.compare("exit") != 0));
    

    return 0;
}
