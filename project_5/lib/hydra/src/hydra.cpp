#include "hydra.hpp"

#include <ctime>
#include <iostream>

void hydra::awake()
{
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result));
}

char* get_time()
{
    time_t ltime;
    time(&ltime);
    return ctime(&ltime);
}

void say_hello(char *message)
{
    printf("Hello from dll!\n%s", message);
}
