
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your birth year: " << endl;
    int year, a;
    cin >> year;

    if (1989 < year && year < 2025)
    {
        a = 2024 - year;
        cout << "Your age is " << a << endl;

        if (a < 1) cout << "Not Born" << endl;
        else if (a == 18) cout << "Need Pass" << endl;
        else if (a > 18) cout << "Allowed" << endl;
        else cout << "Not allowed" << endl;
    }
    else
        cout << "Invalid" << endl;
    return 0;
}