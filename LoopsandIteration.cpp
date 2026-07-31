#include <iostream>
using namespace std;

int main() {
    int target;

    cout << "Enter a number to print its multiplication table: ";
    cin >> target;

    for (int i = 1; i <= 10; ++i) {
        cout << target << " x " << i << " = " << (target * i) << endl;
    }

    return 0;
}
