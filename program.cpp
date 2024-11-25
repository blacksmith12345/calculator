#include <iostream>
using namespace std;

int main() {
    
    double num1, num2, num3;

    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    
    double max_num = num1; 

    if (num2 > max_num) {
        max_num = num2; 
    }
    if (num3 > max_num) {
        max_num = num3; 
    }

  
    cout << "The maximum of the three numbers is: " << max_num << endl;

    return 0;
}
