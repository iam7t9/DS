#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< "Enter a number" << endl;
    cin>> a;
    cout<<"The number "<<a<<" is "<< ((a%2)?"odd.":"even.") << endl;
    return 0;
}