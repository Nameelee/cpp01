#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	std::string name = "Horde Zombie";
	std::cout << "---" << "Generating Zombies of " << N << "---" << std::endl;

	Zombie* myHorde = zombieHorde(N, name);
	if (!myHorde)
	{
		std::cerr << "Failed at allocation memory!" << std::endl;//whatisit
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