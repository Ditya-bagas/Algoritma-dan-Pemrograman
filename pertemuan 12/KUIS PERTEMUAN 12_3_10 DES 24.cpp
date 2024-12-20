#include <iostream>
using namespace std;

double hitungLuas(double jariJari);
double rataRata(int arr[], int ukuran);
long long faktorial(int n);

int main(){
     int choice;

     do {
        cout << "Menu:\n";
        cout << "1. Hitung luas lingkaran\n";
        cout << "2. Hitung rata-rata array\n";
        cout << "3. Hitung faktorial\n";
        cout << "4. Exit\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;

         if (choice == 4) {
            break;
         }
        switch (choice) {
            case 1: {
                double jariJari;
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> jariJari;
                double luas = hitungLuas(jariJari);
                cout << "Luas lingkaran dengan jari-jari " << jariJari << " adalah: " << luas << endl;
                break;
            }
            case 2: {
                int ukuran;
                cout << "Masukkan jumlah elemen array: ";
                cin >> ukuran;
                if (ukuran <= 0) {
                    cout << "Ukuran array harus lebih dari 0.\n";
                    break;
                }

                int arr[ukuran];
                cout << "Masukkan elemen array:\n";
                for (int i = 0; i < ukuran; ++i) {
                    cout << "Elemen ke-" << (i + 1) << ": ";
                    cin >> arr[i];
                }

                double rata = rataRata(arr, ukuran);
                cout << "Rata-rata elemen array adalah: " << rata << endl;
                break;
            }
            case 3: {
                int angka;
                cout << "Masukkan angka untuk menghitung faktorial: ";
                cin >> angka;

                if (angka < 0) {
                    cout << "Faktorial hanya berlaku untuk angka >= 0.\n";
                    break;
                }

                long long hasil = faktorial(angka);
                cout << "Faktorial dari " << angka << " adalah: " << hasil << endl;
                break;
            }
            case 4: {
                cout << "Terima kasih! Program selesai.\n";
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
            }
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}

double hitungLuas(double jariJari) {
    const double phi = 3.14;
    double luas;
    if (static_cast<int>(jariJari) % 7 == 0) {
        luas = (22 * jariJari * jariJari) / 7;
    } else {
        luas = phi * jariJari * jariJari;
    }
    return luas;
}

double rataRata(int arr[], int ukuran) {
    int total = 0;
    for (int i = 0; i < ukuran; ++i) {
        total += arr[i];
    }
    return static_cast<double>(total) / ukuran;
}
long long faktorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}








