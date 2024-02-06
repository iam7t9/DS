#include <iostream>

using namespace std;

int main()
{
    cout<< "Enter your age: " << endl;
    int a;
    cin>>a;

    if(a<1) 
    {
        cout<<"Invalid"<<endl;
    }

    else if (a==18)
    {
        cout<<"Need Pass"<<endl;
    }

    else if (a>18)
    {
        cout<<"Allowed"<<endl;
    }
    else
    {
        cout<<"Not allowed"<<endl;
    }
    // (a%2)?cout<<"The number "<<a<<" is odd"<<endl:cout<<"The number "<<a<<" is even"<<endl;
    return 0;
}