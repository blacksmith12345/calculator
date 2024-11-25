#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the three numbers
    double num1, num2, num3;

    // Prompt the user for input
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the maximum of the three numbers
    double max_num = num1; // Assume num1 is the maximum initially

    if (num2 > max_num) {
        max_num = num2; // Update max_num if num2 is greater
    }
    if (num3 > max_num) {
        max_num = num3; // Update max_num if num3 is greater
    }

    // Output the maximum number
    cout << "The maximum of the three numbers is: " << max_num << endl;

    return 0;
}
