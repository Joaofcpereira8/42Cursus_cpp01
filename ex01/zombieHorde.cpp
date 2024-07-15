/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horde.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:57:58 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/15 15:57:59 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name) {
	// Allocate raw memory for N Zombies
	Zombie* horde = static_cast<Zombie*>(operator new[](N * sizeof(Zombie)));

	// Construct each Zombie in the allocated memory
	for (int i = 0; i < N; ++i) {
		new (&horde[i]) Zombie(name); // Placement new
	}

	return horde;
}