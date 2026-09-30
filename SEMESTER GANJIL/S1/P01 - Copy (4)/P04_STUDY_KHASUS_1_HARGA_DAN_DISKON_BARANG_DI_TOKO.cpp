#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ulang = 1;

    while (ulang == 1) {
        int jumlahBarang;
        double harga, total = 0, diskon = 0;

        cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;

        for (int i = 1; i <= jumlahBarang; i++) {
            cout << "Masukkan harga barang ke-" << i << ": Rp ";
            cin >> harga;
            total += harga;
        }

        if (total > 500000) {
            diskon = total * 0.10;
        } else if (total >= 250000) {
            diskon = total * 0.05;
        } else {
            diskon = 0;
        }

        cout << fixed << setprecision(2);
        cout << "Total Harga: Rp " << total << endl;
        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Setelah Diskon: Rp " << total - diskon << endl;

        cout << "Ingin menambahkan belanjaan lagi? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> ulang;
    }

    return 0;
}
/*Masukkan jumlah barang: 3
Masukkan harga barang ke-1: Rp 300000
Masukkan harga barang ke-2: Rp 100000
Masukkan harga barang ke-3: Rp 50000
Total Harga: Rp 450000.00
Diskon: Rp 22500.00
Total Setelah Diskon: Rp 427500.00
Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): 1
Masukkan jumlah barang: 2
Masukkan harga barang ke-1: Rp 100000
Masukkan harga barang ke-2: Rp 20000
Total Harga: Rp 120000.00
Diskon: Rp 0.00
Total Setelah Diskon: Rp 120000.00
Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): 2*/