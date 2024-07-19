/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:22:43 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 18:22:47 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replaceLetters(const std::string& line, const std::string& toReplace, const std::string& replace) {
	std::string	newLine;
	size_t position = 0;
	size_t findPos;

	while ((findPos = line.find(toReplace, position)) != std::string::npos) {
		newLine.append(line, position, findPos - position); //adiciona o antes da mudanca
		newLine.append(replace); //adiciona a nova string/char
		position = findPos + toReplace.length(); //passa a string/char inserida
	}
	newLine.append(line, position, line.length() - position); //adiciona o resto da frase

	return newLine;
}

int	main(int ac, char **av) {
	if (ac == 4) {
		std::string line;
		std::ifstream file(av[1]);

		if (file.is_open()) {
			std::ofstream fileToReplace;
			std::string nameFileReplace = av[1];
			nameFileReplace += ".replace";
			fileToReplace.open(nameFileReplace.c_str());
			while (std::getline(file, line)) {
				fileToReplace << replaceLetters(line, av[2], av[3]) << std::endl;
			}
			fileToReplace.close();
			file.close();
		}
		else
			std::cout << "Can't open file!" << std::endl;
	}
	else
		std::cerr << "Usage: " << av[0] << " <filename> <char_to_replace> <char_to_replace_with>" << std::endl;
	return 0;
}
