
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

        // if (a < 1) cout << "Not Born" << endl;
        // else if (a == 18) cout << "Need Pass" << endl;
        // else if (a > 18) cout << "Allowed" << endl;
        // else cout << "Not allowed" << endl;

        switch (a)
        {
        case 0:
            cout << "Not Born" << endl;
            break;
        case 1:
            cout << "Not Allowed" << endl;
            break;
        case 2:
            cout << "Not Allowed" << endl;
            break;
        case 3:
            cout << "Not Allowed" << endl;
            break;
        case 4:
            cout << "Not Allowed" << endl;
            break;
        case 5:
            cout << "Not Allowed" << endl;
            break;
        case 6:
            cout << "Not Allowed" << endl;
            break;
        case 7:
            cout << "Not Allowed" << endl;
            break;
        case 8:
            cout << "Not Allowed" << endl;
            break;
        case 9:
            cout << "Not Allowed" << endl;
            break;
        case 10:
            cout << "Not Allowed" << endl;
            break;
        case 11:
            cout << "Not Allowed" << endl;
            break;
        case 13:
            cout << "Not Allowed" << endl;
            break;
        case 14:
            cout << "Not Allowed" << endl;
            break;
        case 15:
            cout << "Not Allowed" << endl;
            break;
        case 16:
            cout << "Not Allowed" << endl;
            break;
        case 17:
            cout << "Not Allowed" << endl;
            break;
        case 18:
            cout << "Need Pass" << endl;
            break;
        default:
            cout << "Allowed" << endl;
        }
    }
    else
        cout << "Invalid" << endl;
    return 0;
}