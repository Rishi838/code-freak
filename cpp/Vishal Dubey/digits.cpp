#include <simplecpp>
main_program{
  int n;  cout << "Type a number: ";  cin >> n;

  int d = 1, ten_power_d=10; 
           // ten_power_d will always be set to 10 raised to d

  while(n >= ten_power_d){  // if loop entered, 
                            // number of digits in n must be > d
    d++;                    // so we try next choice for d
    ten_power_d *= 10;
  }

  cout << "The number has " << d << " digits." << endl;
}
