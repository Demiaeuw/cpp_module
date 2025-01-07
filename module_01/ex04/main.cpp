/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:07:19 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/04 16:30:11 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replaceToNew(std::ifstream &inputFile, std::ofstream &outputFile, const std::string& s1, const std::string& s2)
{
	std::string line;
	
	while (std::getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outputFile << line << std::endl;
	}
}

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Command: ./replace <file name> <origine string> <new string>" << std::endl;
		return 1;
	}
	
	std::string fileName = av[1];
	std::string s1 = av[2]; std::string s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty!" << std::endl;
		return 1;
	}
	std::ifstream inputFile(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Cannot open file " << fileName << std::endl;
		return 1;
	}
	std::ofstream outpoutFile((fileName + ".replace").c_str());
	if (!outpoutFile.is_open())
	{
		std::cerr << "Error: Cannot create output file." << std::endl;
		return 1;
	}

	replaceToNew(inputFile, outpoutFile, s1, s2);
	inputFile.close();
	outpoutFile.close();

	return 0;
	
}