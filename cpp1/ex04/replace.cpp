/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:44:17 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:44:23 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream inFile(filename.c_str());
	std::ofstream outFile((filename + ".replace").c_str());
	std::string line;

	if (!inFile.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}
	while (std::getline(inFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outFile << line << std::endl;
    }
	inFile.close();
    outFile.close();
}
