#include <iostream>

using namespace std;
int main()
{   
    cout << "Enter no of elements: ";
    int n ;
    cin>>n;

    cout<<"Elements: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // insertion sort
    for(int i=1; i<n; i++)
    {
        int x=arr[i];
        int j=i-1;

        while(arr[j]>x && j>=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }

    cout <<"Sorted elements: ";

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}