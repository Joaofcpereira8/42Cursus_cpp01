/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:59:06 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 14:59:10 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

HumanA::HumanA(std::string nameHuman, Weapon &weaponName)
		: name(nameHuman), weapon(weaponName) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}