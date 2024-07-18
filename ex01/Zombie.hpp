/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:41:50 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/11 18:41:54 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {

	private:
		std::string	name;

	public:
		//Constructor
		Zombie();
		Zombie(const std::string &inputName);

		//Destructor
		~Zombie();

		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif //CPP01_ZOMBIE_H
