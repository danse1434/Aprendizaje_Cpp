#include <iostream>
#include <limits>



int main(int argc, char const *argv[])
{
    int arr[]{1,2,3};
    
    std::cout << 2[arr] << '\n';
    // 2[arr] es equivalente a: arr[2] - *(arr + 2)


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}