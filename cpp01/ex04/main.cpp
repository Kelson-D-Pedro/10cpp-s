/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:56:02 by kpedro            #+#    #+#             */
/*   Updated: 2025/05/09 19:11:31 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

static  std::string replace_v2(std::string line, std::string s1, std::string s2)
{
    size_t      pos;

    pos = 0;
    while ((pos = line.find(s1)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
    line.insert(line.length(), "\n");
    return (line);
}

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Wrong Arguments" << std::endl;
        return (1);
    }
    std::string file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream   read_file(file_name.c_str());
    std::ofstream   write_file(file_name.insert(file_name.length(),".replace").c_str());
    std::string line;
    if (!read_file.is_open() || !write_file.is_open())
    {
        std::cerr << "Error Opening file" << std::endl;
        return (1);
    }
    while (std::getline(read_file, line))
        write_file << replace_v2(line, s1, s2);
    
    return 0;
}
