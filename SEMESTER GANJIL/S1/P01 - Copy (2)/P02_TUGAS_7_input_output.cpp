#include <iostream>
#include <iomanip>

using namespace std; // <-- Tambahkan baris ini

int main() { 
    double jarak; 
    double konsumsi; 
    double harga; 
    double totalBiaya; 
    
    cout << "=== STUDI KASUS 7 ===" << endl; 
    cout << "MENGHITUNG TOTAL BIAYA PERJALANAN" << endl; 
    cout << endl; 
    
    cout << "Jarak Tempuh (km): "; 
    cin >> jarak; 
    cout << "Konsumsi Bahan Bakar (km/l): "; 
    cin >> konsumsi; 
    
    cout << "Harga Bahan Bakar (Rp/l): "; 
    cin >> harga; 
    
    totalBiaya = (jarak / konsumsi) * harga; 
    
    cout << fixed << setprecision(2);
    cout << endl; 
    cout << "Total Biaya Bahan Bakar: Rp " << totalBiaya << endl; 
    
    return 0; 
}
/*=== STUDI KASUS 7 ===
MENGHITUNG TOTAL BIAYA PERJALANAN

Jarak Tempuh (km): 549695956795750975975
Konsumsi Bahan Bakar (km/l): 30
Harga Bahan Bakar (Rp/l): 20000

Total Biaya Bahan Bakar: Rp 366463971197167326986240.00*/