/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:59:18 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 14:59:21 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

HumanB::HumanB(std::string nameHuman)
		: name(nameHuman), weapon(NULL) {
}

void HumanB::attack() {
	if (this->weapon == NULL)
		std::cout << name << " attacks with his bare hands!" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon1) {
	weapon = &weapon1;
}

HumanB::~HumanB() {
}
