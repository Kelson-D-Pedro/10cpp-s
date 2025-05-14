/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:36:21 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/14 13:08:10 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include "Contact.hpp"

Contact::Contact()
{
    f_name = "";
    l_name = " ";
    n_name = " ";
    dark_secret = " ";
    number = "";
}

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string dark_secret, std::string number)
{
    this->f_name = f_name;
    this->l_name = l_name;
    this->n_name = n_name;
    this->dark_secret = dark_secret;
    this->number = number;
}

std::string Contact::get_fname()
{
    return f_name;
}

std::string Contact::get_lname()
{
    return l_name;
}

std::string Contact::get_nname()
{
    return n_name;
}

std::string Contact::get_dark_secret()
{
    return dark_secret;
}

std::string Contact::get_number()
{
    return number;
}

void    Contact::set_fname(std::string value)
{
    this->f_name = value;
}

void    Contact::set_lname(std::string value)
{
    this->l_name = value;
}

void    Contact::set_nname(std::string value)
{
    this->n_name = value;
}

void    Contact::set_dark_secret(std::string value)
{
    this->dark_secret = value;
}

void    Contact::set_number(std::string value)
{
    this->number = value;
}

Contact::~Contact()
{
}