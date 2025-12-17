#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: You didn't follow the instruction" << std::endl;
        std::cerr << " example: ./harlFilter <level>" << std::endl;
        std::cerr << " You can choose <DEBUG>, <INFO>, <WARNING>, <ERROR>" << std::endl;
        return (1);
    }

    Harl harl;
    harl.complain(av[1]);

    return (0);
}
