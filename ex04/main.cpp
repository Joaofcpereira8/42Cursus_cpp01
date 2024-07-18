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

int	main(int ac, char **av) {
	if (ac == 4) {
		std::string line;
		std::ifstream file(av[1]);

		if (file.is_open())
			while (std::getline(file, line)) {

				}
			}
		std::cout << line << std::endl;
		file.close();
	}
	else
		std::cerr << "Usage: " << av[0] << " <filename> <char_to_replace> <char_to_replace_with>" << std::endl;
	return 0;
}
