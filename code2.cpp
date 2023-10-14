#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "general Calculator\n\n";

    // enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // enter the operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    //error production enter valid operation
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Invalid operation. Please choose +, -, *, or /." << endl;
        return 1;
    }

    // enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // special case :Check for division by zero
    if (operation == '/' && num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
//printing result:
    cout << "\nResult: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}
