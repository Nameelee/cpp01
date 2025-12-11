/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:48:58 by jelee             #+#    #+#             */
/*   Updated: 2025/11/07 18:49:01 by jelee            ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(int ac, char **av)
{

	if (ac != 3)
	{
		std::cerr << "Error: Wrong input. Input like this." << std::endl;
		std::cerr << "./horde <number> <name>" << std::endl;
		std::cerr << "for example: ./horde 5 Kim" << std::endl;
		return (1);
	}

	int N = std::atoi(av[1]);
	std::string name = av[2];

	if (N <= 0)
	{
		std::cerr << "Error: The number should be larger than 0." << std::endl;
		return (1);
	}

	std::cout << "---" << "Generating Zombies of " << N << "---" << std::endl;

	Zombie* myHorde = zombieHorde(N, name);
	if (!myHorde)
	{
		std::cerr << "Failed at allocation memory!" << std::endl;//cerr: shows error like cout
		return (1);
	}

	std::cout << "\n---Introducing the horde of Zombie---" << std::endl;
	for (int i = 0; i < N; i++)
	{
		myHorde[i].announce();
	}

	std::cout << "\n---deleting the horde of Zombie---" << std::endl;
	delete[] myHorde;
	
	return (0);
}
