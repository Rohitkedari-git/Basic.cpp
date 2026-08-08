#include <iostream>
using namespace std;

int main() {
    double num1, num2, temp;

    // User input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Display before swap
    cout << "\nBefore swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display after swap
    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    return 0;
}
