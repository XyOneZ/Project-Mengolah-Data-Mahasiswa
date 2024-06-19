ALGORITMA NARATIF : Pengolahan Data Mahasiswa
  
  Bahan-bahan
- Struktur data Mahasiswa
- Fungsi menambahkan data mahasiswa baru
- Fungsi menampilkan daftar mahasiswa
- Fungsi mencari data mahasiswa berdasarkan NIM
- Fungsi menghapus data mahasiswa berdasarkan NIM
- Fungsi mengubah data mahasiswa berdasarkan NIM
- Fungsi menyimpan data mahasiswa ke dalam file
- Fungsi membaca data mahasiswa dari file
- Fungsi main sebagai program utama yang mengatur interaksi dengan pengguna untuk mengelola data mahasiswa

Langkah-langkah
1. Pertama-tama, buatlah struktur data mahasiswa yang berisikan (NIM, Nama, Jurusan, dan Nilai).

2. Fungsi `tampilkanMenu()`:

  Fungsi ini menampilkan opsi menu kepada pengguna dan meminta input pilihan. Input yang diterima adalah bilangan bulat yang sesuai dengan opsi 
  menu yang dipilih,ada 7 menu pilihan.

  Validasi pilihan:

  Jika pengguna memasukkan pilihan yang tidak valid (misalnya bukan angka 1-7), program akan memberikan pesan "Pilihan tidak valid" dan meminta 
  pengguna untuk memilih lagi.

3. Selanjutnya, buat fungsi untuk menambahkan data mahasiswa yang berisi:
  - Instruksi untuk memasukkan data mahasiswa yang terdiri dari NIM, Nama, Jurusan, dan Nilai.
  - Instruksi untuk menyimpan data mahasiswa baru ke dalam vektor `daftarMahasiswa`.
  - Tampilkan pesan bahwa mahasiswa berhasil ditambahkan.
    
3. Setelah fungsi penambahan mahasiswa dibuat, untuk melihat data yang telah dimasukkan, buat fungsi untuk menampilkan daftar mahasiswa yang 
   berisi:
  - Periksa apakah vektor `daftarMahasiswa` kosong.
  - Jika kosong, tampilkan "Daftar mahasiswa kosong."
  - Jika tidak kosong, tampilkan setiap data mahasiswa (NIM, Nama, Jurusan, Nilai) dari vektor `daftarMahasiswa`.
    
4. Untuk mencari data mahasiswa berdasarkan NIM, buat fungsi yang berisi:
  - Pencarian mahasiswa berdasarkan NIM di dalam vektor `daftarMahasiswa`.
  - Jika ditemukan, kembalikan pointer ke data mahasiswa tersebut.
  - Jika tidak ditemukan, tampilkan "NIM mahasiswa tidak ditemukan."

5. Untuk menghapus data mahasiswa berdasarkan NIM, buat fungsi dengan langkah-langkah sebagai berikut:
  - Hapus mahasiswa dari vektor daftarMahasiswa berdasarkan NIM.
  - Tampilkan pesan "Data Mahasiswa berhasil dihapus" jika berhasil, atau "Data Mahasiswa tidak ditemukan" jika tidak ditemukan.

6. Jika perlu mengubah data mahasiswa, buat fungsi untuk mengubah data mahasiswa berdasarkan NIM dengan langkah-langkah sebagai berikut:
  - Ubah data mahasiswa seperti Nama, Jurusan, dan Nilai.
  - Tampilkan pesan "Data mahasiswa berhasil diubah" jika berhasil, atau "Data tidak tersimpan" jika tidak ada.

7. Untuk menyimpan data mahasiswa ke dalam file, buat fungsi dengan langkah-langkah sebagai berikut:
  - Buat file dengan nama tertentu `(namaFile)` untuk menyimpan. 
  - Buka file dengan nama tertentu `(namaFile)` untuk penulisan.
  - Jika file terbuka, tulis setiap data mahasiswa (NIM, Nama, Jurusan, Nilai) dari `daftarMahasiswa` ke dalam file.
  - Tutup file setelah penulisan selesai.
  - Tampilkan pesan "Data berhasil disimpan ke dalam file" jika berhasil, atau "Data tidak tersimpan" jika tidak berhasil.

8. Untuk membaca data mahasiswa dari file, buat fungsi dengan langkah-langkah sebagai berikut:
  - Buka file dengan nama tertentu `(namaFile)` untuk pembacaan.
  - Jika file terbuka, baca setiap data (NIM, Nama, Jurusan, Nilai) dari file ke dalam `daftarMahasiswa`.
  - Tampilkan pesan "Data berhasil dimuat dari file" jika berhasil, atau "Data tidak diterdapat dalam file" jika tidak berhasil.
  - Tutup file setelah pembacaan selesai.

9. Langkah terakhir adalah menambahkan fungsi `main` sebagai program utama yang mengatur interaksi dengan pengguna untuk mengelola data 
   mahasiswa. Di dalam `main()`, langkah-langkahnya adalah sebagai berikut:
  - Deklarasikan vektor `daftarMahasiswa` dan string `namaFile`.
  - Panggil fungsi `muatDariFile()` untuk memuat data dari file `namaFile` ke dalam `daftarMahasiswa`.
  - Buat variabel `pilihan` dan `nim` untuk input dari pengguna.
  - Mulai loop `do-while` untuk menu operasi:
    * Tampilkan menu operasi kepada pengguna dan minta input pilihan.
    * Gunakan switch-case untuk memproses setiap pilihan:
    * Panggil fungsi sesuai dengan pilihan yang dipilih.
    * Jika pilihan adalah untuk keluar (misalnya pilihan 6), panggil fungsi `simpanKeFile()` untuk menyimpan data ke dalam file dan keluar dari 
      loop.
    * Ulangi loop sampai pengguna memilih untuk keluar.
  - Selesai.
