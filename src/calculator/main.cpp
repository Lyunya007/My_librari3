#include <iostream>
#include <cstdlib>

using namespace std;

void showMenu() {
    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Error: Division by zero!\n";
        return 0;
    }
}

int main() {
    double num1, num2, result;
    int choice;

    while (true) {
        showMenu();
        cout << "Enter operation number (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting program.\n";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice! Please choose an operation from 1 to 5.\n";
        }
    }

    return 0;
}
