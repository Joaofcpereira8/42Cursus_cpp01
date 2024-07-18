/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:48:14 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/18 14:48:25 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "header.hpp"

class	Weapon {
	private:
		std::string type;

	public:
		Weapon(std::string weapon);
		~Weapon();

		std::string	getType() const;
		void		setType(std::string typeWeapon);
};

#endif //WEAPON_H
