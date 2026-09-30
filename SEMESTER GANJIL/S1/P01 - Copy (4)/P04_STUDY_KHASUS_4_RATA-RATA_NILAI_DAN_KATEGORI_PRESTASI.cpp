#include <iostream>
using namespace std;

int main() {
    int ulang = 1;

    while (ulang == 1) {
        int jumlahMapel;
        double nilai, total = 0;

        cout << "Masukkan jumlah mata pelajaran: ";
        cin >> jumlahMapel;

        for (int i = 1; i <= jumlahMapel; i++) {
            cout << "Masukkan nilai mata pelajaran ke-" << i << ": ";
            cin >> nilai;
            total += nilai;
        }

        double rataRata = total / jumlahMapel;

        cout << "Rata-rata Nilai: " << rataRata << endl;

        if (rataRata > 85) {
            cout << "Prestasi: Sangat Baik" << endl;
        } else if (rataRata >= 70) {
            cout << "Prestasi: Baik" << endl;
        } else if (rataRata >= 50) {
            cout << "Prestasi: Cukup" << endl;
        } else {
            cout << "Prestasi: Perlu Peningkatan" << endl;
        }

        cout << "Ingin menghitung nilai untuk siswa lain? "
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
Ingin menghitung tagihan untuk penggunaan lain? (1 untuk ya, selain itu untuk tidak): 2
PS C:\VSCOODE> cd "c:\VSCOODE\" ; if ($?) { g++ P04_STUDY_KHASUS_4.cpp -o P04_STUDY_KHASUS_4 } ; if ($?) { .\P04_STUDY_KHASUS_4 }
Masukkan jumlah mata pelajaran: 3
Masukkan nilai mata pelajaran ke-1: 90
Masukkan nilai mata pelajaran ke-2: 20
Masukkan nilai mata pelajaran ke-3: 80
Rata-rata Nilai: 63.3333
Prestasi: Cukup
Ingin menghitung nilai untuk siswa lain? (1 untuk ya, selain itu untuk tidak): 1
Masukkan jumlah mata pelajaran: 2
Masukkan nilai mata pelajaran ke-1: 90
Masukkan nilai mata pelajaran ke-2: 65
Rata-rata Nilai: 77.5
Prestasi: Baik
Ingin menghitung nilai untuk siswa lain? (1 untuk ya, selain itu untuk tidak): 2*/