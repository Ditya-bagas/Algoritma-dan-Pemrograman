#include <iostream>
using namespace std;

void tukarAngka(int* a, int* b);
void kaliLima(int* num);


int main() {
    int choice, num1, num2;

    do {
        cout << "Menu:\n";
        cout << "1. Menukar dua angka\n";
        cout << "2. Mengalikan angka dengan 5\n";
        cout << "3. Exit\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;

        if (choice == 3) {
        cout << "Terima kasih! Program selesai.\n";
        break;
        }

        switch (choice) {
            case 1: {
            cout << "Masukkan angka pertama: ";
            cin >> num1;
            cout << "Masukkan angka kedua: ";
            cin >> num2;
            cout << "======================";

            cout << "Sebelum ditukar:\n";
            cout << "Angka pertama: " << num1 << endl;
            cout << "Angka kedua: " << num2 << endl;

            tukarAngka(&num1, &num2);

            cout << "Setelah ditukar:\n";
            cout << "Angka pertama: " << num1 << endl;
            cout << "Angka kedua: " << num2 << endl;
            break;
            }
            case 2: {
            cout << "Masukkan angka: ";
            cin >> num1;

            cout << "Sebelum dikalikan dengan 5: " << num1 << endl;

            kaliLima(&num1);

            cout << "Setelah dikalikan dengan 5: " << num1 << endl;
            break;
            }
            default: {
                cout << "Pilihan tidak valid. Coba lagi.\n";
                break;
            }
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}

void tukarAngka(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void kaliLima(int* num) {
    *num = *num * 5;
}

