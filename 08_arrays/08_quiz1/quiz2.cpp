#include <iostream>
#include <iterator>
#include <limits>


/* Esta función toma dos punteros inicio (begin) y final (end) */
int *find(int *begin, int *end, int value)
{
    for (int *p{begin}; p != end; ++p) // inicia una variable p que es puntero con la dirección de begin
    {
        if (*p == value)
        {
            return p;
        }
    }
    return end;
}

int main(int argc, char const *argv[])
{
    int arr[]{2, 5, 4, 10, 8, 20, 16, 40};
    int *found{ find(std::begin(arr), std::end(arr), 4) };

    // If an element with value 20 was found, print it.
    if (found != std::end(arr))
    {
        std::cout << *found << '\n';
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}