int LinearSearch(const int* arr, int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            return i;
        }
    }
    return -1;
}