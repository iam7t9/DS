#include <iostream>

using namespace std;

int binary(int arr[], int key, int n)
{
    int lower = 0, higher = n - 1;

    while (lower <= higher)
    {
        int mid = (lower + higher) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            higher = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter total numbers: ";
    cin >> size;

    int inp_array[size];

    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> inp_array[i];
    }

    // binary search

    int key;
    cout << "Enter a key to find: ";
    cin >> key;

    cout << binary(inp_array, key, size) << endl;
}