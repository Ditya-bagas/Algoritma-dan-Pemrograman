#include <iostream>

using namespace std;

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << "  G ";
        } else {
            cout << i + 1 ;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Angka yang diinginkan: ";
    cin >> n;

    printPattern(n);

    return 0;
}
