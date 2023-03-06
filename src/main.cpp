#include <iostream>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    bool running = true;
    std::string input;

    std::string commands[] = 
    {
        "help - lists the current commands\n",
        "cls - clears the screen\n",
        "dir - outputs the directory\n",
        "credits - shows who has worked on this project\n",
        "exit - exits the program\n"
    };

    while(running)
    {
        printf("user>");
        std::getline(std::cin, input);
        if(input == "help")
        {
            for(int i = 0; i < commands->size(); i++)
            {
                std::cout << commands[i];
            }
        }
        else if(input == "cls")
        {
            system("clear");
        }
        else if(input == "dir")
        {
            system("dir");
            std::cout << "\n";
        }
        else if(input == "credits")
        {
            printf("Creator: rldald989\n");
        }
        else if(input == "exit")
        {
            running = false;
            //return 0;
        }
    }
    return 0;
}