/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:34:21 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/07 16:54:45 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
    std::string     text;
    std::string&    text_ref = text;
    std::string*    text_ptr = &text;

    text = "HI THIS IS BRAIN";
    std::cout << "String Address " << &text << std::endl;
    std::cout << "String Pointer Value " << text_ptr << std::endl;
    std::cout << "String Reference Address Value " << &text_ref << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    std::cout << "String Value " << text << std::endl;
    std::cout << "String Pointer Pointed Value " << *text_ptr << std::endl;
    std::cout << "String Reference Value " << text_ref << std::endl;
    return 0;
}
