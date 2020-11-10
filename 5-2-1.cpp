// by Xavier Boak
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

float avg(int [], int);

int main() {

    srand(time(0));
    int k;
    cout << "Enter the desired size of the array.\n";
    cin >> k;
    int nums[k];
    for (int i = 0; i < k; i++) {
        nums[i] = rand() % 100;
    } // end of for
    cout << "The average value of \"nums\" is " << fixed << setprecision(2) << avg(nums, k) << endl;

} // end of main()

float avg(int n[], int l) {
    
    int sum = 0;
    for (int i = 0; i < l; i++) {
        sum += n[i];
    } // end of for
    return (float)(sum)/l;

} // end of avg()