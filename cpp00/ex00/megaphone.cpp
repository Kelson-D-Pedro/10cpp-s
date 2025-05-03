/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:20:03 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/02 14:44:22 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>
# include <cstring>

int main(int argc, char const *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        for (size_t j = 0; j < strlen(argv[i]); j++)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
        std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}
