#include <iostream>

using namespace std;

void max(int a, int b)
{
    if (a==b) cout<<"Both numbers are Equal"<<endl;
    else if (a>b) cout<<"Greater number is "<<a<< endl;
    else cout<<"Greater number is "<<b<< endl;
    // return (a>b)?a:b;
}

int main()
{
    int a,b;

    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    // cout << "Max number is: " << max(a,b);
    max(a,b);
    return 0;
}