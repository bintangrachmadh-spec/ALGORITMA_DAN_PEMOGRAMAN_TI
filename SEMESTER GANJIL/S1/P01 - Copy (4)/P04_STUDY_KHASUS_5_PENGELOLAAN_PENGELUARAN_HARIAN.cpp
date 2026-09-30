#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int ulang = 1;

    while (ulang == 1) {
        double totalMakanan = 0, totalTransportasi = 0;
        double totalHiburan = 0, totalLainnya = 0;
        double terbesar = 0;
        string kategoriTerbesar = "";

        for (int hari = 1; hari <= 7; hari++) {
            string kategori;
            double jumlah;

            cout << "Masukkan kategori pengeluaran hari ke-" << hari
                 << " (Makanan/Transportasi/Hiburan/Lain-lain): ";
            cin >> kategori;
            cout << "Masukkan jumlah pengeluaran: Rp ";
            cin >> jumlah;

            string kategoriDipakai;
            if (kategori == "Makanan") {
                totalMakanan += jumlah;
                kategoriDipakai = "Makanan";
            } else if (kategori == "Transportasi") {
                totalTransportasi += jumlah;
                kategoriDipakai = "Transportasi";
            } else if (kategori == "Hiburan") {
                totalHiburan += jumlah;
                kategoriDipakai = "Hiburan";
            } else {
                // selain tiga kategori di atas dihitung sebagai Lain-lain
                totalLainnya += jumlah;
                kategoriDipakai = "Lain-lain";
            }

            if (jumlah > terbesar) {
                terbesar = jumlah;
                kategoriTerbesar = kategoriDipakai;
            }
        }

        double totalSeminggu = totalMakanan + totalTransportasi
                             + totalHiburan + totalLainnya;

        cout << fixed << setprecision(2);
        cout << "Total Pengeluaran Makanan: Rp " << totalMakanan << endl;
        cout << "Total Pengeluaran Transportasi: Rp " << totalTransportasi << endl;
        cout << "Total Pengeluaran Hiburan: Rp " << totalHiburan << endl;
        cout << "Total Pengeluaran Lainnya: Rp " << totalLainnya << endl;
        cout << "Total Pengeluaran Selama Seminggu: Rp " << totalSeminggu << endl;
        cout << "Pengeluaran Terbesar: Rp " << terbesar
             << " pada kategori " << kategoriTerbesar << endl;

        cout << "Ingin mencatat pengeluaran untuk minggu lain? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> ulang;
    }

    return 0;
}
/*Masukkan kategori pengeluaran hari ke-1 (Makanan/Transportasi/Hiburan/Lain-lain): makanan
Masukkan jumlah pengeluaran: Rp 10000
Masukkan kategori pengeluaran hari ke-2 (Makanan/Transportasi/Hiburan/Lain-lain): makanan
Masukkan jumlah pengeluaran: Rp 30000
Masukkan kategori pengeluaran hari ke-3 (Makanan/Transportasi/Hiburan/Lain-lain): hiburan
Masukkan jumlah pengeluaran: Rp 10000
Masukkan kategori pengeluaran hari ke-4 (Makanan/Transportasi/Hiburan/Lain-lain): transportasi
Masukkan jumlah pengeluaran: Rp 20000
Masukkan kategori pengeluaran hari ke-5 (Makanan/Transportasi/Hiburan/Lain-lain): makanan
Masukkan jumlah pengeluaran: Rp 10000
Masukkan kategori pengeluaran hari ke-6 (Makanan/Transportasi/Hiburan/Lain-lain): makanan
Masukkan jumlah pengeluaran: Rp 150000
Masukkan kategori pengeluaran hari ke-7 (Makanan/Transportasi/Hiburan/Lain-lain): kuota
Masukkan jumlah pengeluaran: Rp 50000
Total Pengeluaran Makanan: Rp 0.00
Total Pengeluaran Transportasi: Rp 0.00
Total Pengeluaran Hiburan: Rp 0.00
Total Pengeluaran Lainnya: Rp 280000.00
Total Pengeluaran Selama Seminggu: Rp 280000.00
Pengeluaran Terbesar: Rp 150000.00 pada kategori Lain-lain
Ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain itu untuk tidak): 2*/