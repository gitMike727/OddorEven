#include <iostream>
#include <limits>

int main()
{
    //check an even number from the user, tell if it is odd or even
    std::cout << "Please give a whole number:\n>>>";
    int number = 0;
    std::cin >> number;

    //some error in this handling
    //auto convert decimal into whole number
    //limitations
    while (!std::cin.good())
    {
        std::cout << "Wrong input, please give me a whole number:\n>>>";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cin >> number;
    }

    //%
    //a % b = the remainder of the division
    //number % 2 the remainder is either 0 or 1.

    if (number % 2 == 0)
    {
        std::cout << "Your number: " << number << " is an even number." << std::endl;
    }
    else
    {
        std::cout << "Your number: " << number << " is an odd number." << std::endl;
    }
    
    return 0;
}