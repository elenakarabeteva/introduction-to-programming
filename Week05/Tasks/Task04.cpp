#include <iostream>

using namespace std;

void arrInput(int *arr, unsigned size);
bool isPolindrome(int *arr, unsigned size);

int main()
{
    int arr[5];
    arrInput(arr, 5);

    cout << (isPolindrome(arr, 5) ? "True" : "False") << endl;
    
    return 0;
}

void arrInput(int *arr, unsigned size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

bool isPolindrome(int *arr, unsigned size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}