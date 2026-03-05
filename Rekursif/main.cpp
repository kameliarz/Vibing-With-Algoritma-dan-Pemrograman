#include <iostream>
using namespace std;

int pangkat(int angka, int pangkat) {
    // Harus angka itu sendiri
    int hasil = angka;
    // Perulangan
    for ( int i = 1; i < pangkat; i++ ) {
        // Selama perulangan ini berjalan
        // Kalikan hasil dengan dirinya sendiri
        hasil *= angka;
    }
    return hasil;
}

// 2 * 4 = 2 * 2 * 2 * 2
// 1, 2, 3
// 0, 1, 2, 3

int main() {
    int angka;
    int pangkat_angka;

    cout << "Masukkan angka yang ingin dipangkatkan: ";
    cin >> angka;

    cout << "Masukkan pangkatnya: ";
    cin >> pangkat_angka;
    
    int hasil;
    hasil = pangkat(angka, pangkat_angka);
    cout << hasil;

    return 0;
}