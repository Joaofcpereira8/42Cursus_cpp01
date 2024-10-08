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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				 "I really do!\n";
}

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				 "years whereas you started working here since last month.\n";
}

void	Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level) {
	void	(Harl::*func_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	if (level.size() != 1 || std::isalpha(level[0])) {
		std::cout << "Wrong type of level" << std::endl;
		return;
	}
	int lev = atoi(level.c_str());
	if (lev >= 0 && lev < 4)
		(this->*func_ptr[lev])();
	else
		std::cout << "Level inserted is not valid" << std::endl;
}