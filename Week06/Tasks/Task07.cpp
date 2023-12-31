#include <iostream>

int powerOfTwo(int size)
{
    return (1 << size);
}

void getSubNumber(const int* arr, int size, int mask)
{
    for (int i = 0; i < size; i++)
    {
        if (mask & 1)
        {
            std::cout << arr[i] << " ";
        }
        mask >>= 1;
    }
}

void printSubNumbers(const int* arr, int size)
{
    int length = powerOfTwo(size);

    for (int i = 0; i < length; i++)
    {
        std::cout << "[ ";
        getSubNumber(arr, size, i);
        std::cout << " ]" << " ";
    }
}