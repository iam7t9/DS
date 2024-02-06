#include <iostream>

using namespace std;
int main()
{
    // Write C++ code here
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    do
    {
        // cout << i << endl;
        sum += i++;
        cout << "Sum is: " << sum << endl;
    } while (i <= n);
    cout << "Sum is: " << sum << endl;
    return 0;
}