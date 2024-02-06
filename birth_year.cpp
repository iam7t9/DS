#include <iostream>

using namespace std;

int main()
{
    cout<< "Enter your birth year: " << endl;
    int year, a;
    cin>>year;
    a = 2024-year;
    cout<<"Your age is "<<a<<endl;
    if(a<1 || a>150) 
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