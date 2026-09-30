#include <iostream>
using namespace std;

int main() {
    int ulang = 1;

    while (ulang == 1) {
        int hadir, jumlahHadir = 0;

        for (int hari = 1; hari <= 5; hari++) {
            cout << "Apakah mahasiswa hadir di hari ke-" << hari
                 << "? (1 untuk hadir, 0 untuk tidak hadir): ";
            cin >> hadir;
            if (hadir == 1) {
                jumlahHadir++;
            }
        }

        double persentase = (jumlahHadir / 5.0) * 100;

        cout << "Persentase Kehadiran: " << persentase << "%" << endl;

        if (persentase > 75) {
            cout << "Status Kehadiran: Baik" << endl;
        } else if (persentase >= 50) {
            cout << "Status Kehadiran: Cukup" << endl;
        } else {
            cout << "Status Kehadiran: Kurang" << endl;
        }

        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> ulang;
    }

    return 0;
}
/*Apakah mahasiswa hadir di hari ke-1? (1 untuk hadir, 0 untuk tidak hadir): 1
Apakah mahasiswa hadir di hari ke-2? (1 untuk hadir, 0 untuk tidak hadir): 1
Apakah mahasiswa hadir di hari ke-3? (1 untuk hadir, 0 untuk tidak hadir): 1
Apakah mahasiswa hadir di hari ke-4? (1 untuk hadir, 0 untuk tidak hadir): 0
Apakah mahasiswa hadir di hari ke-5? (1 untuk hadir, 0 untuk tidak hadir): 1
Persentase Kehadiran: 80%
Status Kehadiran: Baik
Ingin mengecek kehadiran untuk mahasiswa lain? (1 untuk ya, selain itu untuk tidak): 1
Apakah mahasiswa hadir di hari ke-1? (1 untuk hadir, 0 untuk tidak hadir): 0
Apakah mahasiswa hadir di hari ke-2? (1 untuk hadir, 0 untuk tidak hadir): 0
Apakah mahasiswa hadir di hari ke-3? (1 untuk hadir, 0 untuk tidak hadir): 1
Apakah mahasiswa hadir di hari ke-4? (1 untuk hadir, 0 untuk tidak hadir): 1
Apakah mahasiswa hadir di hari ke-5? (1 untuk hadir, 0 untuk tidak hadir): 0
Persentase Kehadiran: 40%
Status Kehadiran: Kurang
Ingin mengecek kehadiran untuk mahasiswa lain? (1 untuk ya, selain itu untuk tidak): 2*/