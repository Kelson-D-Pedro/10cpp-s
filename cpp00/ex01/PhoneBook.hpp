/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:06:25 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/14 13:10:42 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <cstring>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
private:
    int cont_numbers;
    int older_index;
    Contact contacts[8];
public:
    PhoneBook();
    ~PhoneBook();
    void    add_contact(Contact new_contact);
    void    search_contact();
};


#endif