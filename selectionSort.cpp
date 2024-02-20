#include <iostream>

using namespace std;
int main()
{   
    cout<<"Enter no of elements: "<<endl;
    int n ;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // selection sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>arr[i])
            {
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"Sorted elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}