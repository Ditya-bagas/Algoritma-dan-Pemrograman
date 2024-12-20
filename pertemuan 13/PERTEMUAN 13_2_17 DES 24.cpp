#include <iostream>
using namespace std;
// JIKA MENGUNAKAN ARRAY YANG SAMA

void multiplyArray(int arr[], int n, int multiplier);
int  penjumlahanarray(int arr[], int n, int penjumlahan);
int  penguranganarray(int arr[], int n, int pengurangan);
double rataRata(int arr[], int ukuran);

int main() {
    int choice;
     int n;
         cout << "Masukkan ukuran array: ";
         cin >> n;

        int arr[n];
        cout << "Masukkan " << n << " elemen untuk array:" << endl;
        for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

        cout << "\nElemen-elemen dalam array sebelum operasi adalah:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

    do {
        cout << "\nMenu:\n";
        cout << "1. Hitung perkalian array\n";
        cout << "2. Hitung Penjumlahan array\n";
        cout << "3. Hitung Pengurangan array\n";
        cout << "4. Hituang rata-rata array\n";
        cout << "5. Exit\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;

        if (choice == 5) {
            cout << "TERIMA KASIH." << endl;
            break;
        }
        switch (choice) {
            case 1: {
                int multiplier;
                cout << "Masukkan nilai pengali: ";
                cin >> multiplier;
                multiplyArray(arr, n, multiplier);

                cout << "Elemen-elemen dalam array setelah perkalian adalah:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                break;
            }

            case 2: {
                int penjumlahan;
                cout << "Masukkan nilai penjumlahan: ";
                cin >> penjumlahan;
                penjumlahanarray(arr, n, penjumlahan);

                cout << "Elemen-elemen dalam array setelah penjumlahan adalah:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                break;
            }

            case 3: {
                int pengurangan;
                cout << "Masukkan nilai pengurangan: ";
                cin >> pengurangan;
                penguranganarray(arr, n, pengurangan);

                cout << "Elemen-elemen dalam array setelah pengurangan adalah:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                break;
            }
            case 4:{
                 int ukuran;
                cout << "Masukkan jumlah elemen array: ";
                cin >> ukuran;
                if (ukuran <= 0) {
                    cout << "Ukuran array harus lebih dari 0.\n";
                    break;
                }
                double rata = rataRata(arr, ukuran);
                cout << "Rata-rata elemen array adalah: " << rata << endl;
                break;
            }

            default: {
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
            }
        }

        cout << endl; // Tambahkan baris kosong untuk memisahkan output dari satu iterasi ke iterasi berikutnya
    } while (true);

    return 0;
}

void multiplyArray(int arr[], int n, int multiplier) {
    for (int i = 0; i < n; i++) {
        arr[i] *= multiplier;
    }
}

int penjumlahanarray(int arr[], int n, int penjumlahan) {
    for (int i = 0; i < n; i++) {
        arr[i] += penjumlahan;
    }
}

int penguranganarray(int arr[], int n, int pengurangan) {
    for (int i = 0; i < n; i++) {
        arr[i] -= pengurangan;
    }
}

double rataRata(int arr[], int ukuran) {
    int total = 0;
    for (int i = 0; i < ukuran; ++i) {
        total += arr[i];
    }
    return static_cast<double>(total) / ukuran;
}

