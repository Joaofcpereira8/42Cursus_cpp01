/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:56:45 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/19 18:56:46 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int	main(int ac, char **av) {
	if (ac != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else {
		Harl harl;
		switch (ac) {
			case 1:
				harl.complain(av[1]);
				break;
			case 2:
				harl.complain(av[1]);
				break;
			case 3:
				harl.complain(av[1]);
				break;
			case 4:
				harl.complain(av[1]);
				break;
		}
	}
}