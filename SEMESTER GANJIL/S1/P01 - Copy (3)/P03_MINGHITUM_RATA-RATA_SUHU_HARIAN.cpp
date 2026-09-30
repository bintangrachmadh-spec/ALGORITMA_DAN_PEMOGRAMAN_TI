#include <iostream> 
#include <iomanip> 
using namespace std;  

int main() { 
    // Deklarasi     
    double suhuHari1;     
    double suhuHari2;     
    double suhuHari3;     
    double suhuHari4;     
    double suhuHari5;     
    double rataRataSuhu; // Mengubah nama variabel agar lebih jelas
   
    // Masukkan data     
    cout << "Masukan Suhu Hari 1: ";       
    cin >> suhuHari1;     
    cout << "Masukan Suhu Hari 2: ";     
    cin >> suhuHari2;     
    cout << "Masukan Suhu Hari 3: ";     
    cin >> suhuHari3;     
    cout << "Masukan Suhu Hari 4: ";     
    cin >> suhuHari4;     
    cout << "Masukan Suhu Hari 5: ";     
    cin >> suhuHari5; 
    
    // Hitung rata-rata
    rataRataSuhu = (suhuHari1 + suhuHari2 + suhuHari3 + suhuHari4 + suhuHari5) / 5;     
    
    // Menampilkan hasil rata-rata dengan 1 angka di belakang koma
    cout << fixed << setprecision(1);       
    cout << "\nRata-rata Suhu: " << rataRataSuhu << " C" << endl;  
    
    // Menentukan keluaran status cuaca
    if (rataRataSuhu > 30.0) {         
        cout << "Status: Cuaca Panas" << endl;     
    }     
    else if (rataRataSuhu >= 20.0 && rataRataSuhu <= 30.0) {         
        cout << "Status: Cuaca Normal" << endl;     
    }     
    else if (rataRataSuhu < 20.0) {         
        cout << "Status: Cuaca Dingin" << endl;     
    }  
    
    return 0; 
}


    /*Masukan Suhu Hari 1: 67
Masukan Suhu Hari 2: 90
Masukan Suhu Hari 3: 348
Masukan Suhu Hari 4: 128720
Masukan Suhu Hari 5: 45

Rata-rata Suhu: 25854.0 C
Status: Cuaca Panas*/