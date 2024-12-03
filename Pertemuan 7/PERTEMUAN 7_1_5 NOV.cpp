#include <iostream>

using namespace std;

// Function declaration for addition
int add(int a, int b);

// Procedure (void function) declaration for subtraction
void subtract(int a, int b);

int main() {
    int num1 = 10, num2 = 5;

    // Calling the addition function
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    // Calling the subtraction procedure
    subtract(num1, num2);

    return 0;
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}

// Procedure (void function) definition for subtraction
void subtract(int a, int b) {
    int result = a - b;
    cout << "Difference: " << result << endl;
}
