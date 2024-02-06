#include <iostream>

using namespace std;

int find(int arr[], int key, int size)
{
    for(int i=0; i<size; i++)
    {
        if(key == arr[i])
        {
            return i;
        }
    }
    
    return -1;
}

int main()
{   int size;
    cout<<"Enter total numbers: ";
    cin>>size;

    int inp_array[size];

    cout<<"Enter "<<size<<" elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin >> inp_array[i];
    }

    // linear searching method 
    int key;
    cout << "Enter a key to find: ";
    cin >> key;

    cout << find(inp_array, key, size) << endl;
    
    return 0;
}