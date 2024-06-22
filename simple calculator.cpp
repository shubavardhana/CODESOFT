#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num1, num2;
    int operation;
    while (true) {
        cout << "\nChoose operation:\n1: +\n2: -\n3: *\n4: /\n5: √\n6: EXIT\n";
        cin >> operation;
        if (operation == 6) break; 
        cout << "Enter first num: ";
        cin >> num1;
        if (operation == 5) {
            cout << "Square Root: " << sqrt(num1) << endl;
            continue; 
        }
        cout << "Enter second num: ";
        cin >> num2;
        switch (operation) {
            case 1: cout << "Sum: " << num1 + num2 << endl; break;
            case 2: cout << "Difference: " << num1 - num2 << endl; break;
            case 3: cout << "Product: " << num1 * num2 << endl; break;
            case 4: cout << "Quotient: " << num1 / num2 << endl; break;
            default: cout << "Invalid operation.\n"; break;
        }
    }
    return 0;
}