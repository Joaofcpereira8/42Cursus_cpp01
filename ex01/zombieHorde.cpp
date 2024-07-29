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

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	//Criamos um array dinamico de pointers de zombies
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		new (&horde[i]) Zombie(name);
	}

	return horde;
}
