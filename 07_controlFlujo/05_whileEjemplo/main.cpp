#include <iostream>
#include <limits>
 
// Iterate through every number between 1 and 50
int main()
{
    int count{ 1 };
    while (count <= 500)
    {
        // print the number (pad numbers under 10 with a leading 0 for formatting purposes)
        if (count < 10)
        {
            std::cout << "00" << count << ' ';
        }
        else if(count < 100)
        {
            std::cout << "0" << count << ' ';
        }
        else
        {
            std::cout << count << ' ';
        }
 
        // if the loop variable is divisible by 10, print a newline
        if (count % 10 == 0)
        {
            std::cout << '\n';
        }
            
        // increment the loop counter
        ++count;
    }
 
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}
