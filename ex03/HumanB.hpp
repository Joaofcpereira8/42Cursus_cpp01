/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:59:23 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 14:59:26 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "header.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string nameHuman);
		HumanB(std::string nameHuman, Weapon &weaponName);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon &weapon1);
};


#endif //HUMANB_HPP
