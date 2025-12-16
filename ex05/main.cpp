#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: You didn't follow the instruction" << std::endl;
        std::cerr << " example: ./hallo <level>" << std::endl;
        return (1);
    }

    Harl harl;
    harl.complain(av[1]);

    return (0);
}