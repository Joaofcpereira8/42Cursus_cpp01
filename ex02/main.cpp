/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:49:03 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 12:49:04 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	//Print address
	std::cout << "Normal string: " << &string << std::endl;
	std::cout << "Pointer string: "<< stringPTR << std::endl;
	std::cout << "Reference string: " << &stringREF << std::endl;

	//Print value
	std::cout << "Normal string: " << string << std::endl;
	std::cout << "Pointer string: "<< *stringPTR << std::endl;
	std::cout << "Reference string: " << stringREF << std::endl;
}