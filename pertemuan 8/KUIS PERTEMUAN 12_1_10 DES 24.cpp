#include <iostream>
using namespace std;

int multiply(int* a, int* b);
int findMax(int* a, int* b);
string checkEvenOdd(int num);

int main() {
    int choice, num1, num2;

    do {
        // Display menu
        cout << "Menu:\n";
        cout << "1. Perkalian\n";
        cout << "2. Mencari angka yang lebih besar dari dua angka\n";
        cout << "3. Menentukan ganjil genap dari sebuah angka\n";
        cout << "4. Exit\n";
        cout << "Masukan pilihan anda: ";
        cin >> choice;

        // Exit if the user chooses to
        if (choice == 4) {
            break;
        }

        // Taking input from the user for the numbers
        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;

        switch (choice) {
            case 1: {
            int result = multiply(&num1, &num2);
            cout << "Hasil perkalian " << num1 << " dan " << num2 << " adalah: " << result << endl;
            break;
            }
            case 2: {
            int maxValue = findMax(&num1, &num2);
            cout << "Nilai terbesar antara " << num1 << " dan " << num2 << " adalah: " << maxValue << endl;
            break;
            }
            case 3: {
            string result1 = checkEvenOdd(num1);
            string result2 = checkEvenOdd(num2);
            cout << "Angka " << num1 << " adalah: " << result1 << endl;
            cout << "Angka " << num2 << " adalah: " << result2 << endl;
            break;
            }
            default: {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
            break;
            }
        }

        cout << endl;
    } while (choice != 4);


    return 0;
}

int multiply(int* a, int* b) {
    return (*a) * (*b);
}

int findMax(int* a, int* b) {
    return (*a > *b) ? *a : *b;
}

string checkEvenOdd(int num) {
    if (num % 2 == 0) {
        return "genap";
    } else {
        return "ganjil";
    }
}
