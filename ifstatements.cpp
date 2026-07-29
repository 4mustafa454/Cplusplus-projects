#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
     if(age >= 100)
    {
        std::cout << "You will die if you drink";
    }

    else if(age >= 18)
    {
        std::cout << "You can drink";
    }
    else if(age < 0)
    {
        std::cout << "You havent been born yet";
    }
    
    else
    {
        std::cout << "You cannot drink";
    }
    

    return 0;
}