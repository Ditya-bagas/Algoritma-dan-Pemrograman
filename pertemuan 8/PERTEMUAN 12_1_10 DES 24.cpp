#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;  // Pointer to x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    *ptr = 20;  // Change value of x through ptr
    cout << "New value of x: " << x << endl;

 return 0;
}
