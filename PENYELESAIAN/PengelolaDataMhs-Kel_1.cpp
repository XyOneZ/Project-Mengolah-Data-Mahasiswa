#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    float nilai;
};

// Fungsi untuk menambahkan data mahasiswa baru
void tambahMahasiswa(vector<Mahasiswa> &daftarMahasiswa) {
    Mahasiswa mhs;
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan Nama: ";
    cin.ignore(); // untuk membersihkan buffer
    getline(cin, mhs.nama);
    cout << "Masukkan Jurusan: ";
    getline(cin, mhs.jurusan);
    cout << "Masukkan Nilai: ";
    cin >> mhs.nilai;
    
    
    daftarMahasiswa.push_back(mhs);
    cout << "Mahasiswa berhasil ditambahkan." << endl;
}

// Fungsi untuk menampilkan daftar mahasiswa
void tampilkanMahasiswa(const vector<Mahasiswa> &daftarMahasiswa) {
    if (daftarMahasiswa.empty()) {
        cout << "Daftar mahasiswa kosong." << endl;
    } else {
        cout << "Daftar Mahasiswa:" << endl;
        for (const Mahasiswa &mhs : daftarMahasiswa) {
            cout << "NIM     : " << mhs.nim << endl;
            cout << "Nama    : " << mhs.nama << endl;
            cout << "Jurusan : " << mhs.jurusan << endl;
            cout << "Nilai   : " << mhs.nilai << endl;
            cout << endl; // Baris kosong setelah setiap entri mahasiswa
        }
    }
}

// Fungsi untuk menyimpan data ke file
void simpanKeFile(const vector<Mahasiswa> &daftarMahasiswa, const string &namaFile) {
    ofstream fileOutput(namaFile);
    if (fileOutput.is_open()) {
        for (const Mahasiswa &mhs : daftarMahasiswa) {
            fileOutput << mhs.nim << endl;
            fileOutput << mhs.nama << endl;
            fileOutput << mhs.jurusan << endl;
            fileOutput << mhs.nilai << endl;
        }
        fileOutput.close();
        cout << "Data mahasiswa berhasil disimpan ke dalam file." << endl;
    } else {
        cout << "Gagal membuka file untuk penyimpanan." << endl;
    }
}

// Fungsi untuk membaca data dari file
void muatDariFile(vector<Mahasiswa> &daftarMahasiswa, const string &namaFile) {
    ifstream fileInput(namaFile);
    if (fileInput.is_open()) {
        daftarMahasiswa.clear(); // Kosongkan dulu vector
        Mahasiswa mhs;
        while (fileInput >> mhs.nim) {
            fileInput.ignore(); // Ignore newline
            getline(fileInput, mhs.nama);
            getline(fileInput, mhs.jurusan);
            fileInput >> mhs.nilai;
            daftarMahasiswa.push_back(mhs);
        }
        fileInput.close();
        cout << "Data mahasiswa berhasil dimuat dari file." << endl;
    } else {
        cout << "Gagal membuka file untuk memuat data." << endl;
    }
}

// Fungsi untuk mencari dan menampilkan mahasiswa berdasarkan NIM
void cariTampilkanMahasiswa(const vector<Mahasiswa> &daftarMahasiswa, const string &nim) {
    auto it = find_if(daftarMahasiswa.begin(), daftarMahasiswa.end(),
                      [&nim](const Mahasiswa &mhs) { return mhs.nim == nim; });
    
    if (it != daftarMahasiswa.end()) {
        cout << "Mahasiswa ditemukan." << endl;
        cout << "NIM     : " << it->nim << endl;
        cout << "Nama    : " << it->nama << endl;
        cout << "Jurusan : " << it->jurusan << endl;
        cout << "Nilai   : " << it->nilai << endl;
    } else {
        cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
    }
}

// Fungsi untuk menghapus data mahasiswa berdasarkan NIM
void hapusMahasiswa(vector<Mahasiswa> &daftarMahasiswa, const string &nim) {
    auto it = remove_if(daftarMahasiswa.begin(), daftarMahasiswa.end(),
                        [&nim](const Mahasiswa &mhs) { return mhs.nim == nim; });
    
    if (it != daftarMahasiswa.end()) {
        daftarMahasiswa.erase(it, daftarMahasiswa.end());
        cout << "Mahasiswa dengan NIM " << nim << " berhasil dihapus." << endl;
    } else {
        cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
    }
}

// Fungsi untuk mengubah data mahasiswa berdasarkan NIM
void ubahMahasiswa(vector<Mahasiswa> &daftarMahasiswa, const string &nim) {
    auto it = find_if(daftarMahasiswa.begin(), daftarMahasiswa.end(),
                      [&nim](const Mahasiswa &mhs) { return mhs.nim == nim; });
    
    if (it != daftarMahasiswa.end()) {
        cout << "Masukkan data baru untuk mahasiswa dengan NIM " << nim << ":" << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, it->nama);
        cout << "Jurusan: ";
        getline(cin, it->jurusan);
        cout << "Nilai: ";
        cin >> it->nilai;
        
        cout << "Data mahasiswa berhasil diubah." << endl;
    } else {
        cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
    }
}

int main() {
    vector<Mahasiswa> daftarMahasiswa;
    string namaFile = "data_mahasiswa.txt"; // Nama file untuk menyimpan data
    
    // Memuat data dari file saat program dimulai
    muatDariFile(daftarMahasiswa, namaFile);

    int pilihan;
    string nim;
    
    do {
        cout << "Menu Operasi Mahasiswa:" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Mahasiswa" << endl;
        cout << "3. Cari dan Tampilkan Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Hapus Mahasiswa berdasarkan NIM" << endl;
        cout << "5. Ubah Data Mahasiswa berdasarkan NIM" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                tambahMahasiswa(daftarMahasiswa);
                break;
            case 2:
                tampilkanMahasiswa(daftarMahasiswa);
                break;
            case 3:
                cout << "Masukkan NIM yang ingin dicari: ";
                cin >> nim;
                cariTampilkanMahasiswa(daftarMahasiswa, nim);
                break;
            case 4:
                cout << "Masukkan NIM yang ingin dihapus: ";
                cin >> nim;
                hapusMahasiswa(daftarMahasiswa, nim);
                break;
            case 5:
                cout << "Masukkan NIM yang ingin diubah: ";
                cin >> nim;
                ubahMahasiswa(daftarMahasiswa, nim);
                break;
            case 6:
                simpanKeFile(daftarMahasiswa, namaFile);
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        
        cout << endl;
    } while (pilihan != 6);
    
    return 0;
}