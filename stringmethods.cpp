#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters long";
    }
    else
    {
        std::cout << "Welcome " << name << "\n";
        std::cout << name.at(1);

    }
    

    return 0;
}