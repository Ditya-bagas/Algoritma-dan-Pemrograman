#include <iostream>

using namespace std;

// Function declaration for addition
int add(int a, int b);

// Function declaration for multiplication
int multiply(int a, int b);

// Procedure (void function) declaration for subtraction
void subtract(int a, int b);

// Procedure (void function) declaration for division
void divide(int a, int b);

int main() {
    int choice, num1, num2;

    while (true) {
        // Display menu
        cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Exit if the user chooses to
        if (choice == 5) {
            break;
        }

        // Taking input from the user for the numbers
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        // Perform the chosen operation
        switch (choice) {
            case 1: {
                // Calling the addition function
                int sum = add(num1, num2);
                cout << "Sum: " << sum << endl;
                break;
            }
            case 2: {
                // Calling the subtraction procedure
                subtract(num1, num2);
                break;
            }
            case 3: {
                // Calling the multiplication function
                int product = multiply(num1, num2);
                cout << "Product: " << product << endl;
                break;
            }
            case 4: {
                // Calling the division procedure
                divide(num1, num2);
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }

        cout << endl; // Add a blank line for better readability
    }

    return 0;
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}

// Function definition for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Procedure (void function) definition for subtraction
void subtract(int a, int b) {
    int result = a - b;
    cout << "Difference: " << result << endl;
}

// Procedure (void function) definition for division
void divide(int a, int b) {
    if (b != 0) {
        double result = static_cast<double>(a) / b;
        cout << "Quotient: " << result << endl ;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}
