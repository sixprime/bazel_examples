#include "hydra.hpp"

#include <ctime>
#include <iostream>

void hydra::awake()
{
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result));
}
