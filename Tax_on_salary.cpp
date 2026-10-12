#include <iostream>
using namespace std;

int main() {
    float salary, tax, net_salary;

    cout << "Enter the salary: ";
    cin >> salary;

    if (salary >= 30000) {
        tax = (salary * 20) / 100;
        cout << "Income tax: " << tax << endl;
    }
    else if (salary >= 20000) {
        tax = (salary * 15) / 100;
        cout << "Income tax: " << tax << endl;
    }
    else {
        tax = (salary * 10) / 100;
        cout << "Income tax: " << tax << endl;
    }

    net_salary = salary - tax;
    cout << "Net Salary: " << net_salary;

    return 0;
}
