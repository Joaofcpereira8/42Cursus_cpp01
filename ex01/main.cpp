/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:47:31 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/11 18:47:32 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int	amount = 10;
	Zombie* horde = zombieHorde(amount, "Zombie");
	for (int i = 0; i < amount; i++) {
		horde[i].announce();
	}

	delete []horde;
	return 0;
}