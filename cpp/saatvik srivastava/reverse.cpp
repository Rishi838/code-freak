//Reverse a number
#include<iostream>
using namespace std;

int main ()
{
  int n;
  cout << "Enter a number: ";

  cin >> n;

  int rev = 0;
  int temp = n;

  while (temp != 0)
    {
      int rem = temp % 10;
      rev = 10 * rev + rem;
      temp = temp / 10;
    }
  cout << "Reverse number of " << n << " is " << rev;


  return 0;
}
