#include <iostream>
using namespace std;

int main() {
    // KODE MAKANAN//
    int MIGR = 25000, NSGR = 22000, STAY = 20000;

    // KODE MINUMAN//
    int JM = 10000, AP = 5000, KP = 5000;

    // Variable Penampung Input Menu
    string kodeMakanan, kodeMinuman;
    string makanan, minuman;

    // Variable Penampung Input Menu
    string TingkatPedas;
    string JenisMinuman;
    string NamaPemesan;

    // Variable Penampung Input Menu
    int JumlahPesananMakanan, JumlahPesananMinuman;

    // Variabel total harga
    int totalMakanan = 0;
    int totalMinuman = 0;
    int totalHarga = 0;
    int uangDibayarkan = 0;
    int kembalian = 0;
    
    // VARIABLE LOOPING 
    char lanjut;
    
    do {
    cout << "========================================" << endl;
    cout << "=     SELAMAT DATANG DI TOKO RAPID     =" << endl;
    cout << "========================================" << endl;
    cout << "NAMA PEMESAN : ";
    cin >> NamaPemesan;
    cout << endl;

    cout << "=========================================" << endl;
    cout << "=     PILIHAN MAKANAN YANG TERSEDIA     =" << endl;
    cout << "=========================================" << endl;
    cout << "=     MIGR - MIE GORENG - RP 25.000     =" << endl;
    cout << "=     NSGR - NASI GORENG - RP 22.000    =" << endl;
    cout << "=     STAY - SOTO AYAM - RP 20.000      =" << endl;
    cout << "=========================================" << endl;
    cout << "=         PILIHAN TINGKAT PEDAS         =" << endl;
    cout << "=========================================" << endl;
    cout << "=           SP - SANGAT PEDAS           =" << endl;
    cout << "=             PD - PEDAS                =" << endl;
    cout << "=           TP - TIDAK PEDAS            =" << endl;
    cout << "=========================================" << endl;
    cout << "MASUKAN KODE MAKANAN YANG INGIN DI PESAN : ";
    cin >> kodeMakanan;
    cout << "JUMLAH YANG INGIN DI PESAN : ";
    cin >> JumlahPesananMakanan;
    cout << "TINGKAT PEDAS (SP/PD/TP) : ";
    cin >> TingkatPedas;
    if (kodeMakanan == "MIGR") {
        totalMakanan += MIGR * JumlahPesananMakanan;
        makanan = " MIE GORENG ";
    } else if (kodeMakanan == "NSGR") {
        totalMakanan += NSGR * JumlahPesananMakanan;
        makanan = " NASI GORENG ";
    } else if (kodeMakanan == "STAY") {
        totalMakanan += STAY * JumlahPesananMakanan;
        makanan = " SOTO AYAM ";
    } else {
        cout << endl << "MAAF KODE MAKANAN TIDAK TERSEDIA " << endl;
        return 0;
    }
    
    if (TingkatPedas == "SP") {
    TingkatPedas = "SANGAT PEDAS";
    } else if (TingkatPedas == "PD") {
    TingkatPedas = "PEDAS";
    } else if (TingkatPedas == "TP") {
    TingkatPedas = "TIDAK PEDAS";
    } else {
    TingkatPedas = "LEVEL PEDAS YANG ANDA PILIH TIDAK TERSEDIA "; // Menampilkan pesan kesalahan jika nilai tidak valid
    }


    // ... (kode untuk memilih minuman dan menghitung harganya)
    cout << "=========================================" << endl;
    cout << "DETAIL PEMBELIAN MAKANAN" << endl;
    cout << "=========================================" << endl;
    cout << "MAKANAN : " << makanan << endl;
    cout << "TINGKAT PEDAS : " << TingkatPedas << endl;
    cout << "TOTAL HARGA MAKANAN : " << totalMakanan << endl << endl;
    cout << endl << endl;
    
    
    cout << "=========================================" << endl;
    cout << "=     PILIHAN MINUMAN YANG TERSEDIA     =" << endl;
    cout << "=========================================" << endl;
    cout << "=     JM - JUS MANGGA - RP 10.000       =" << endl;
    cout << "=     AP - AIR PUTIH - RP 5.000         =" << endl;
    cout << "=     KP - KOPI - RP 5.000              =" << endl;
    cout << "=========================================" << endl;
    cout << "=         PILIHAN JENIS MINUMAN         =" << endl;
    cout << "=========================================" << endl;
    cout << "=             DG - DINGIN               =" << endl;
    cout << "=             PN - PANAS                =" << endl;
    cout << "=             HT - HANGAT               =" << endl;
    cout << "=========================================" << endl;
    cout << "MASUKAN KODE MINUMAN YANG INGIN DI PESAN : ";
    cin >> kodeMinuman;
    cout << "JUMLAH YANG INGIN DI PESAN : ";
    cin >> JumlahPesananMinuman;
    cout << "MASUKAN JENIS MINUMAN (DG/PN/HT) : ";
    cin >> JenisMinuman;

    if (kodeMinuman == "JM") {
        totalMinuman += JM * JumlahPesananMinuman;
        minuman = " JUS MANGGA ";
    } else if (kodeMinuman == "AP") {
        totalMinuman += AP * JumlahPesananMinuman;
        minuman = " AIR PUTIH ";
    } else if (kodeMinuman == "KP") {
        totalMinuman += KP * JumlahPesananMinuman;
        minuman = " KOPI ";
    } else {
        cout << endl << "MAAF KODE MINUMAN TIDAK TERSEDIA " << endl;
        return 0;
    }
    if (JenisMinuman == "DG") {
    JenisMinuman = "DINGIN";
    } else if (JenisMinuman == "PN") {
    JenisMinuman = "PANAS";
    } else if (JenisMinuman == "HT") {
    JenisMinuman = "HANGAT";
    } else {
    JenisMinuman = "JENIS MINUMAN YANG ANDA PILIH TIDAK TERSEDIA "; // Menampilkan pesan kesalahan jika nilai tidak valid
    }
        
    

    cout << "=========================================" << endl;
    cout << "DETAIL PEMBELIAN MINUMAN" << endl;
    cout << "=========================================" << endl;
    cout << "MINUMAN : " << minuman << endl;
    cout << "JENIS MINUMAN : " << JenisMinuman << endl ;
    cout << "TOTAL HARGA MAKANAN : " << totalMinuman << endl << endl;
    cout << endl << endl;



    // ... (menampilkan detail pembelian minuman)
    totalHarga = totalMakanan + totalMinuman;
    cout << "=========================================" << endl;
    cout << "DETAIL PESANAN" << endl;
    cout << "=========================================" << endl;
    cout << "NAMA PEMESAN : " << NamaPemesan << endl;
    cout << "MAKANAN : " << makanan << endl;
    cout << "TINGKAT PEDAS : " << TingkatPedas << endl;
    cout << "TOTAL HARGA MAKANAN : " << totalMakanan << endl;
    cout << "MINUMAN : " << minuman << endl;
    cout << "JENIS MINUMAN : " << JenisMinuman << endl;
    cout << "TOTAL HARGA MINUMAN : " << totalMinuman << endl;
    cout << "JUMLAH YANG HARUS DI BAYAR " << totalHarga << endl;
    cout << "=========================================" << endl;
    cout << "UANG YANG DIBAYARKAN : ";
    cin >> uangDibayarkan;
    kembalian = uangDibayarkan - totalHarga;
    cout << "KEMBALIAN : " << kembalian << endl;
    
    
    cout << "APAKAH ANDA INGIN MEMESAN LAGI? (Y/T): ";
    cin >> lanjut;
    } while (lanjut == 'Y' || lanjut == 'y');


    return 0;
}

