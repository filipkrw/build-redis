#include <iostream>

void print_binary(const unsigned char val)
{
    for (int i = 7; i >= 0; i--)
    {
        if (val & (1 << i))
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        }
    }
}

int main()
{
    // print_binary('x');
    // print_binary('d');
    int x = 1 << 16;

    // cast x to a number and print
    std::cout << static_cast<int>(x) << std::endl;

    return 0;
}