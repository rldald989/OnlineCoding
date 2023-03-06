#include <iostream>
#include <stdlib.h>

int main()
{
    bool running = true;
    std::string input;

    while(running)
    {
        std::getline(std::cin, input);
        if(input == "cls")
        {
            system("cls");
        }
    }
}