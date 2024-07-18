/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:59:14 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 14:59:16 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "header.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA(std::string nameHuman, Weapon &weaponName);
		~HumanA();

		void	attack(void);
};


#endif //HUMANA_HPP
