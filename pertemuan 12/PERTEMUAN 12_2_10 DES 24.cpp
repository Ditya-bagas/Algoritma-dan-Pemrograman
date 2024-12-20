#include <iostream>
using namespace std;

// Function to add two numbers using pointers and return the result
int add(int* num1, int* num2) {
    return *num1 + *num2; // Dereference the pointers to get the values and add them
}

int main() {
    int a, b;

    // Prompt the user for input
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Call the add function, passing pointers to a and b
    int sum = add(&a, &b);

    // Output the result
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
return 0;
}
