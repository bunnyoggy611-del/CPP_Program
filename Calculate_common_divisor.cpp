#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the variables (a, b, c): ";
    cin >> a >> b >> c;

    if (a != 0) {
        if (b % a == 0 && c % a == 0) {
            cout << "a is the common divisor of b and c";
        } else {
            cout << "NOT the common divisor";
        }
    } else {
        cout << "Error";
    }

    return 0;
}
