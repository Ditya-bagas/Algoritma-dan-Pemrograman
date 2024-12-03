#include <iostream>

int main() {
    // Deklarasi Variabel
    float num1, num2, sum;
    float kurang;
    float kali;
    float bagi;

    // Menerima Input dari pungguna
    std::cout << "masukan angka pertama: ";
    std::cin >> num1;
    std::cout << "masukan angka kedua: ";
    std::cin >> num2;

    // menjumlahkan,mengurangi,mengali dan membagi kedua angka
    sum = num1 + num2;
    kurang = num1 - num2;
    kali = num1 * num2;
    bagi = num1/num2;

    // Menampillakan hasil
    std::cout << "Hasil penjumlahan: " << sum << std::endl;
    std::cout << "hasil pengurangan: " << kurang << std::endl;
    std::cout << "hasil perkalian: " << kali << std::endl;
    std::cout << "hasil pembagian: " << bagi << std::endl;


   return 0;
}
