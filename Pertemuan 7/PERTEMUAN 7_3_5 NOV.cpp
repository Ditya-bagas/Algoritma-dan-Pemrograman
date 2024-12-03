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
    int num1, num2;

    // Get input from the user
    cout << "Masukan angka pertama: ";
    cin >> num1;
    cout << "Masukan angka kedua: ";
    cin >> num2;

    // Call the addition function and print the result
    int sum = add(num1, num2);
    cout << "PENJUMLAHAN: " << sum << endl;

    // Call the multiplication function and print the result
    int product = multiply(num1, num2);
    cout << "PERKALIAN: " << product << endl;

    // Call the subtraction procedure
    subtract(num1, num2);

    // Call the division procedure
    divide(num1, num2);

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
    cout << "PENGURANGAN: " << result << endl;
}

// Procedure (void function) definition for division
void divide(int a, int b) {
    if (b != 0) {
        double result = static_cast<double>(a) / b;
        cout << "PEMBAGIAN: " << result << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}
