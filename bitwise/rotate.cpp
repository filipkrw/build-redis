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

char rotate_left(char val)
{
    int highbit;
    if (val & 0x80)
    {
        highbit = 1;
    }
    else
    {
        highbit = 0;
    }
    char result;
    result = val << 1;
    result = result | highbit;
    return result;
}

char rotate_right(char val, int n)
{
    char lowbits = val << (8 - n);
    char result = val >> n;
    result = result | lowbits;
    return result;
}

int main()
{
    // unsigned int n = 128;
    // char x = n;
    // print_binary(x);
    // std::cout << ' ' << std::endl;
    // char result = rotate_left(x);
    // print_binary(result);

    unsigned int n = 3;
    char x = n;
    print_binary(x);
    std::cout << ' ' << std::endl;
    print_binary(rotate_right(x, 3));
}