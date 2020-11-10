// by Xavier Boak

#include <iostream>

using namespace std;

void swap();
void swap(int &);
void swap(int &, int &);
void swap(int &, int &, int &);
void swap(int &, int &, int &, int &);

int main() {

    int c, n1, n2, n3, n4;
    cout << "Please enter 2, 3, or 4.\n";
    cin >> c;

    if (c == 2) {
        cout << "Please enter two numbers and I'll swap 'em.\n";
        cin >> n1 >> n2;
        cout << n1 << " " << n2 << " --> ";
        swap(n1, n2);
        cout << n1 << " " << n2 << endl;
    } else if (c == 3) {
        cout << "Please enter three numbers and I'll order 'em.\n";
        cin >> n1 >> n2 >> n3;
        cout << n1 << " " << n2 << " " << n3 << " --> ";
        swap(n1, n2, n3);
        cout << n1 << " " << n2 << " " << n3 << endl;
    } else if (c == 4) {
        cout << "Please enter four numbers and I'll shift 'em.\n";
        cin >> n1 >> n2 >> n3 >> n4;
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << " --> ";
        swap(n1, n2, n3, n4);
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    } else if (c == 1) {
        cout << "Okay... Please enter a number and I'll send it back to you.\n";
        cin >> n1;
        cout << n1 << " --> ";
        swap(n1);
        cout << n1 << endl << "Happy?\n";
    } else if (c == 0) {
        cout << "Uh okay... this function doesn't do anything but I'll go with it.\n";
        cout << " --> ";
        swap();
        cout << endl;
        cout << "See?\n";
    } else {
        cerr << "Not in range.\n";
    } // end of check c

} // end of main()

void swap(){
    // yup
} // end of swap(0)

void swap(int &a) {
    int t1 = a;
    a = t1;
} // end of swap(1)

void swap(int &a, int &b){
    int t1 = a;
    a = b;
    b = t1;
} // end of swap(2)

void swap(int &a, int &b, int &c){

    int t1 = a, t2 = b, t3 = c;
    if (t3 <= t2 && t3 <= t1) {
        a = t3;
        if (t2 < t1){
            c = t1;
        } else {
            b = t1;
            c = t2;
        } // end of nested if
    } else if (t2 <= t1 && t2 <= t3) {
        a = t2;
        if (t3 < t1) {
            b = t3;
            c = t1;
        } else {
            b = t1;
        } // end of other nested if
    } else {
        if (t3 < t2) {
            b = t3;
            c = t2;
        } // end of other other nested if
    } // end of if

} // end of swap(3)

void swap(int &a, int &b, int &c, int &d) {

    int t = a;
    a = b;
    b = c;
    c = d;
    d = t;

} // end of swap(4)