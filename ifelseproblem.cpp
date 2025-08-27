#include <iostream>   // Input-output library
using namespace std;

int main() {
    int marks;                  // Variable to store marks
    cin >> marks;               // Input marks

    if (marks >= 80 && marks <= 100) {   // Check for grade A
        cout << "A";
    }
    if (marks >= 60 && marks <= 79) {    // Check for grade B
        cout << "B";
    }
    if (marks >= 50 && marks <= 59) {    // Check for grade C
        cout << "C";
    }
    if (marks >= 45 && marks <= 49) {    // Check for grade D
        cout << "D";
    }
    if (marks >= 25 && marks <= 44) {    // Check for grade E
        cout << "E";
    }
    else if (marks < 25) {               // Check for grade F
        cout << "F";
    }

    return 0;   // End program
}
