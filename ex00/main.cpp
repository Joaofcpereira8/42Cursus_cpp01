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
	Zombie* zombie = newZombie("Brozola");
	zombie->announce();

	randomChump("Irmoum");

	delete zombie;
	return 0;
}