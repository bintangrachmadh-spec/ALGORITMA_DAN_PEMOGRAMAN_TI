#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ulang = 1;

    while (ulang == 1) {
        double kwh, tarif, tagihan, diskon = 0;

        cout << "Masukkan penggunaan listrik (kWh): ";
        cin >> kwh;

        if (kwh <= 100) {
            tarif = 1500;
        } else if (kwh <= 300) {
            tarif = 2000;
        } else {
            tarif = 3000;
        }

        tagihan = kwh * tarif;

        if (tagihan > 1000000) {
            diskon = tagihan * 0.10;
        }

        cout << fixed << setprecision(2);
        cout << "Total Penggunaan Listrik: " << kwh << " kWh" << endl;
        cout << "Total Tagihan Sebelum Diskon: Rp " << tagihan << endl;
        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Tagihan Setelah Diskon: Rp " << tagihan - diskon << endl;

        cout << "Ingin menghitung tagihan untuk penggunaan lain? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> ulang;
    }

    return 0;
}
/*Masukkan penggunaan listrik (kWh): 500
Total Penggunaan Listrik: 500.00 kWh
Total Tagihan Sebelum Diskon: Rp 1500000.00
Diskon: Rp 150000.00
Total Tagihan Setelah Diskon: Rp 1350000.00
Ingin menghitung tagihan untuk penggunaan lain? (1 untuk ya, selain itu untuk tidak): 1
Masukkan penggunaan listrik (kWh): 90
Total Penggunaan Listrik: 90.00 kWh
Total Tagihan Sebelum Diskon: Rp 135000.00
Diskon: Rp 0.00
Total Tagihan Setelah Diskon: Rp 135000.00
Ingin menghitung tagihan untuk penggunaan lain? (1 untuk ya, selain itu untuk tidak): 2*/