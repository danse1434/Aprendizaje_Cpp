#include <iostream>
#include <limits>

int main(int argc, char const *argv[])
{
    int *ptr{new int};
    *ptr = 7;

    int *ptr1{new int{6}};

    std::cout << "ptr" << "\t\t\t" << "*ptr" << std::endl;
    std::cout << ptr << "\t\t" << *ptr << std::endl;
    std::cout << ptr1 << "\t\t" << *ptr1 << std::endl;

    //
    ptr = nullptr;
    delete ptr1; 
    std::cout << "---------------------------------------------"<< std::endl;
    std::string *ptr2{new (std::nothrow) std::string{ "En caso de Bad_Allocate" }};
    
    std::cout << ptr2 << "\t\t" << *ptr2 << std::endl;

    std::cout << "---------------------------------------------"<< std::endl;
    
    int *ptr3 = new int{0};
    
    // Memory leaks
    int value{5};
    int *ptr5{new int{}}; // allocate memory
    delete ptr5;          // return memory back to operating system
    ptr5 = &value;        // reassign pointer to address of value

    //
    int *p10{new int[10]};
    int *temp{p10+1};
    std::cout << p10 << "\t\t" << *p10 << std::endl;
    std::cout << temp << "\t\t" << *temp << std::endl;


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}