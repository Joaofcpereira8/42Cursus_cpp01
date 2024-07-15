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

#include "Zombie.h"

int	main() {
	int N = 5;
	Zombie horde(N, "Zombie");
	horde.announce(); // Announce for all zombies

	return 0;
}