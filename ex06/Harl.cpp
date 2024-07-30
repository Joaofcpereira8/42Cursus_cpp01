/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:56:15 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/19 18:56:52 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug() {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				 "I really do!\n";
}

void	Harl::info() {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning() {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				 "years whereas you started working here since last month.\n";
}

void	Harl::error() {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level) {
	void	(Harl::*func_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
			size_t index = i;
	}
	if (index >= 0 && index < 4) {
		switch (index) {
			case 0:
				(this->*func_ptr[0])();
			case 1:
				(this->*func_ptr[1])();
			case 2:
				(this->*func_ptr[2])();
			case 3:
				(this->*func_ptr[3])();
				break ;
		}
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}