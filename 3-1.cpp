//Assignment 3-1 (Group Work)
#include <iostream>
using namespace std;

void getListPrimes(int, int);
int InputCheck(int, int);

int main() {
  int num1, num2;
  
  do{
  cout << "Enter two values greater than or equal to 0: ";
  cin >> num1 >> num2;
  } while (!InputCheck(num1, num2));
  //Input Validation, checks if bounds are correct, keeps asking if not
  
  getListPrimes(num1, num2);
  // the main function was 
} // end of main

int InputCheck(int a, int b)
{
  if (a > b || a < 0 || b < 0) // Checks if inputs are greater than 0 and if the first increment is greater than the second
    return 0;
  else 
    return 1;
} // end of InputCheck

void getListPrimes(int b, int e) { 
  cout << endl;               // formatting
    int count = 0;            // formatting and to check if                                           the program is working properly                                      by keeping track of the total                                        number of computed primes
    for (int i = b; i <= e; i++) {
        if (i == 1) {
            // 1 is not prime so we just skip it
        } else if (((i == 2) || (i == 3)) || ((i == 5) || (i == 7))) {
            cout << " " << i << " ";    // purely formatting
            count++;
        } else if ((i % 2 != 0) && (i % 5 != 0)) { // efficiency
            bool isPrime = true;
            for (int l = 3; l < (i+1)/2; l++) {
                if (i % l == 0) {
                    isPrime = false;
                    break;              // only breaks out of the nearest loop
                } // end of nested if
            } // end of nested for
            if (isPrime) {
                if (count % 5 == 0)     // this prints the primes at five per line 
                cout << endl;
                cout << i << " ";
                count++;
            } // end of check print
        } // end of else-if
    } // end of outer loop
    cout << "\n\nTotal Number of Primes: " << count << endl;
} // end of listprimes