/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:49:29 by jelee             #+#    #+#             */
/*   Updated: 2025/11/07 18:49:32 by jelee            ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << name;
		ss << i;
		horde[i].setName(ss.str());
	}

	return (horde);
}
