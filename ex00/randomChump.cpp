
#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie stackZombie = Zombie(name);//without 'new' keyword, this will be allocated in Stack memory 
    stackZombie.announce();
}