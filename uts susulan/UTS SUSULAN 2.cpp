#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "masukan angka a: ";
    cin >> a;
    cout << "masukan angka b: ";
    cin >> b;
    cout << "sebelum di pindah:"<<endl;
    cout << "a = " << a << ", b = " << b << endl;

    // setelah pertukaran
    c = a;
    a = b;
    b = c;

    cout << "setelah pertukaran: "<< endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;

}
