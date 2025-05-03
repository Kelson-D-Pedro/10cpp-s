/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:23:41 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/03 16:33:30 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
private:
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string dark_secret;
        std::string number;

public:
    Contact();
    Contact(std::string f_name, std::string l_name, std::string n_name, std::string dark_secrets, std::string number);
    std::string get_fname();
    std::string get_lname();
    std::string get_nname();
    std::string get_dark_secret();
    std::string get_number();
    void        set_fname(std::string value);
    void        set_lname(std::string value);
    void        set_nname(std::string value);
    void        set_dark_secret(std::string value);
    void        set_number(std::string value);
    ~Contact();
};
# endif