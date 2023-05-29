/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:40:48 by mparisse          #+#    #+#             */
/*   Updated: 2023/05/17 17:50:21 by mparisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

std::ifstream	openMyFile(char *filename)
{
	std::ifstream	inputfile;

	inputfile.open(filename);
	return (inputfile);
}

std::ofstream	openOutFile(std::string filename)
{
	std::ofstream outputFile;

	outputFile.open((filename + ".replace").c_str());
	return (outputFile);
}

// #include <iostream>
// #include <string>

// int main() {

void	find_occurence(std::string sentence, std::string occurence, std::string replace_by, std::ofstream& output)
{
	(void) replace_by;
    size_t pos = sentence.find(occurence); // Find the first occurrence of searchString
	size_t i = 0;
    while (pos != std::string::npos) {
        std::cout << "Found occurrence of \"" << occurence << "\" at index " << pos << std::endl;

        size_t substringLength = occurence.length();
        size_t endIndex = pos + substringLength;
		while (i < pos)
		{
			output << sentence[i];
			i++;
		}
		std::cout.flush();
		output << replace_by << std::flush;
		std::cout.flush();
		while (i < endIndex)
			i++;
        std::cout << "End index of occurrence: " << endIndex << std::endl;

        pos = sentence.find(occurence, endIndex); // Find the next occurrence of searchString
    }
	unsigned long k = 0;
	while (k < sentence.length())
	{
		output << sentence[k] << std::flush;
		k++;
	}
	std::cout.flush();
    return ;
}


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error !!" << std::endl;
		return 1;
	}
	for (int i = 1; i < ac; i++)
	{
		std::cout << "av >>  " << av[i] << std::endl;
	}
	std::ifstream inputFile = openMyFile(av[1]);
		// std::cerr << "The file does not exist !!!" << std::endl;
		// return 1;
	std::ofstream output = openOutFile(av[1]);
	// {
	// 	std::cerr << "this isnt minishell brother !!" << std::endl;
	// 	return 1;
	// }
	std::string fileContents((std::istreambuf_iterator<char>(inputFile)),
                                 std::istreambuf_iterator<char>());
	find_occurence(fileContents, av[2], av[3], output);
	return (0);
}