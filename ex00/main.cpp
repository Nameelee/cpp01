#include "Zombie.hpp"

int main(void)
{
    std::cout << "--- Heap Zombie Test (newZombie)---" << std::endl;
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie; 

    std::cout << "\n--- Stack Zombie Test (randomChump) ---" << std::endl;
    randomChump("Stack Zombie");

    std::cout << "\n--- End Test ---" << std::endl;
    return (0);
}