#include <iostream>
#include <fstream> // Untuk manipulasi file

using namespace std;

// Deklarasi fungsi-fungsi yang akan digunakan
void tambahMahasiswa();
void tampilkanDaftarMahasiswa();
void cariMahasiswa();
void hapusMahasiswa();
void ubahDataMahasiswa();
void simpanKeFile();

int main() {
    string namaFile = "mahasiswa.txt"; // Nama file yang digunakan

    // Mencoba membuka file, jika tidak ditemukan, membuat file baru
    ifstream file(namaFile.c_str());
    if (!file) {
        cout << "File " << namaFile << " tidak ditemukan. Membuat file baru." << endl;
        ofstream newFile(namaFile.c_str());
        newFile.close();
    }
    file.close();

    int pilihan;
    do {
        // Menampilkan menu operasi
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Daftar Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Hapus Mahasiswa berdasarkan NIM" << endl;
        cout << "5. Ubah Data Mahasiswa berdasarkan NIM" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        // Memproses pilihan menu
        switch (pilihan) {
            case 1:
                tambahMahasiswa();
                break;
            case 2:
                tampilkanDaftarMahasiswa();
                break;
            case 3:
                cariMahasiswa();
                break;
            case 4:
                hapusMahasiswa();
                break;
            case 5:
                ubahDataMahasiswa();
                break;
            case 6:
                simpanKeFile();
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan menu tidak valid. Silakan pilih lagi." << endl;
                break;
        }
    } while (pilihan != 6);

    return 0;
}

// Implementasi fungsi-fungsi yang telah dideklarasikan

void tambahMahasiswa() {
    // Implementasi fungsi tambahMahasiswa()
    cout << "Fungsi tambahMahasiswa() belum diimplementasikan." << endl;
}

void tampilkanDaftarMahasiswa() {
    // Implementasi fungsi tampilkanDaftarMahasiswa()
    cout << "Fungsi tampilkanDaftarMahasiswa() belum diimplementasikan." << endl;
}

void cariMahasiswa() {
    // Implementasi fungsi cariMahasiswa()
    cout << "Fungsi cariMahasiswa() belum diimplementasikan." << endl;
}

void hapusMahasiswa() {
    // Implementasi fungsi hapusMahasiswa()
    cout << "Fungsi hapusMahasiswa() belum diimplementasikan." << endl;
}

void ubahDataMahasiswa() {
    // Implementasi fungsi ubahDataMahasiswa()
    cout << "Fungsi ubahDataMahasiswa() belum diimplementasikan." << endl;
}

void simpanKeFile() {
    // Implementasi fungsi simpanKeFile()
    cout << "Fungsi simpanKeFile() belum diimplementasikan." << endl;
}
