#include<iostream>

using namespace std;

int main()
{
    cout<< "Welcome to C++ Environment." << endl;
    int a,b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    if(a<=5 && b<=5){
        cout<<"a and b are less than 5";
    }
    if(a<=5 || b<=5){
        cout<<"either a or b are less than 5";
    }
    
    return 0;
}
