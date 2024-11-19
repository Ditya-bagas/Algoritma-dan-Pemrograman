#include <iostream>
using namespace std;

// Function untuk menghitung total harga per barang
double hitungTotalHarga(double harga, int jumlah) {
    return harga * jumlah;
}

// Procedure untuk menampilkan daftar barang
void tampilkanDaftarBarang() {
    cout << "===== Daftar Barang =====" << endl;
    cout << "1. Pulpen         - Rp 2000" << endl;
    cout << "2. Buku Tulis     - Rp 5000" << endl;
    cout << "3. Penghapus      - Rp 1500" << endl;
    cout << "4. Pensil         - Rp 3000" << endl;
    cout << "5. Penggaris      - Rp 4000" << endl;
    cout << "6. Spidol         - Rp 3500" << endl;
    cout << "7. Selesai Memilih Barang" << endl;
    cout << "=========================" << endl;
}

int main() {
    int pilihan, jumlah;
    double harga, totalHarga = 0;

    do {
        // Tampilkan menu utama
        cout << "===== Sistem Penjualan Barang =====" << endl;
        cout << "1. Lihat Daftar Barang" << endl;
        cout << "2. Beli Barang" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanDaftarBarang();
                break;

            case 2:
                tampilkanDaftarBarang();
                while (true) {
                    cout << "Pilih barang (1-7): ";
                    cin >> pilihan;

                    if (pilihan == 7) {
                        // Keluar dari pemilihan barang
                        cout << "Selesai memilih barang." << endl;
                        break;
                    }

                    // Validasi pilihan barang
                    if (pilihan == 1) {
                        harga = 2000;
                        cout << "Anda memilih Pulpen." << endl;
                    } else if (pilihan == 2) {
                        harga = 5000;
                        cout << "Anda memilih Buku Tulis." << endl;
                    } else if (pilihan == 3) {
                        harga = 1500;
                        cout << "Anda memilih Penghapus." << endl;
                    } else if (pilihan == 4) {
                        harga = 3000;
                        cout << "Anda memilih Pensil." << endl;
                    } else if (pilihan == 5) {
                        harga = 4000;
                        cout << "Anda memilih Penggaris." << endl;
                    } else if (pilihan == 6) {
                        harga = 3500;
                        cout << "Anda memilih Spidol." << endl;
                    } else {
                        cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
                        continue;
                    }

                    // Masukkan jumlah barang
                    cout << "Masukkan jumlah: ";
                    cin >> jumlah;

                    // Hitung total harga untuk barang ini
                    totalHarga += hitungTotalHarga(harga, jumlah);
                }

                // Tampilkan total harga setelah selesai memilih
                cout << "Total harga semua barang: Rp " << totalHarga << endl;
                break;

            case 3:
                cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
        cout << endl;

    } while (pilihan != 3); // Ulangi hingga pengguna memilih keluar

    return 0;
}
