#include <iostream>
using namespace std;
int
main ()
{
  // Write C++ code here
  int n, i = 1, sum = 0;
  cout << "Enter a number" << endl;
  cin >> n;

  while (i <= n)
    {
      sum = sum + i++;
    }
  cout <<"Sum is: "<< sum << endl;
  return 0;
}