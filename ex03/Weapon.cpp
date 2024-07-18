/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:48:09 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 14:48:11 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Weapon::Weapon(std::string weapon) {
	setType(weapon);
}

Weapon::~Weapon() {
}

std::string Weapon::getType() const {
	return type;
}

void	Weapon::setType(std::string typeWeapon) {
	type = typeWeapon;
}