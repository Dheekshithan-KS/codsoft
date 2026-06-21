#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;
    cout << "========================================" << endl;
    cout << "         SIMPLE CALCULATOR" << endl;
    cout << "========================================" << endl; 
    do {
        cout << "\nEnter first number: ";
        cin >> num1;
        
        cout << "Enter second number: ";
        cin >> num2;
        
        cout << "\nChoose an operation:" << endl;
        cout << "  + for Addition" << endl;
        cout << "  - for Subtraction" << endl;
        cout << "  * for Multiplication" << endl;
        cout << "  / for Division" << endl;
        cout << "Enter operation: ";
        cin >> operation;
        
        // Perform calculation based on operation
        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "\n" << num1 << " + " << num2 << " = " << fixed << setprecision(2) << result << endl;
                break;
                
            case '-':
                result = num1 - num2;
                cout << "\n" << num1 << " - " << num2 << " = " << fixed << setprecision(2) << result << endl;
                break;
                
            case '*':
                result = num1 * num2;
                cout << "\n" << num1 << " * " << num2 << " = " << fixed << setprecision(2) << result << endl;
                break;
                
            case '/':
                // Check for division by zero
                if (num2 == 0) {
                    cout << "\nError: Cannot divide by zero!" << endl;
                } else {
                    result = num1 / num2;
                    cout << "\n" << num1 << " / " << num2 << " = " << fixed << setprecision(2) << result << endl;
                }
                break;
                
            default:
                cout << "\nInvalid operation! Please enter +, -, *, or /" << endl;
                continue;
        }
    } 
    return 0;
}
