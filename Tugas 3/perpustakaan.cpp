#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahun;
    string isbn;
};

vector<Buku> daftarBuku;

void tambahBuku() {
    Buku buku;
    cout << "Masukkan judul buku: ";
    getline(cin, buku.judul);
    cout << "Masukkan pengarang buku: ";
    getline(cin, buku.pengarang);
    cout << "Masukkan tahun terbit buku: ";
    cin >> buku.tahun;
    cin.ignore();
    cout << "Masukkan nomor ISBN buku: ";
    getline(cin, buku.isbn);

    daftarBuku.push_back(buku);

    cout << "Buku berhasil ditambahkan!" << endl;
}

void tampilkanDaftarBuku() {
    if (daftarBuku.empty()) {
        cout << "Daftar buku kosong." << endl;
    } else {
        cout << "Daftar buku:" << endl;
        for (const auto& buku : daftarBuku) {
            cout << "Judul: " << buku.judul << endl;
            cout << "Pengarang: " << buku.pengarang << endl;
            cout << "Tahun Terbit: " << buku.tahun << endl;
            cout << "ISBN: " << buku.isbn << endl;
            cout << "------------------------" << endl;
        }
    }
}

void cariBuku() {
    string keyword;
    cout << "Masukkan kata kunci judul buku: ";
    getline(cin, keyword);

    bool found = false;
    for (const auto& buku : daftarBuku) {
        if (buku.judul.find(keyword) != string::npos) {
            cout << "Judul: " << buku.judul << endl;
            cout << "Pengarang: " << buku.pengarang << endl;
            cout << "Tahun Terbit: " << buku.tahun << endl;
            cout << "ISBN: " << buku.isbn << endl;
            cout << "------------------------" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Buku dengan judul \"" << keyword << "\" tidak ditemukan." << endl;
    }
}

void hapusBuku() {
    string keyword;
    cout << "Masukkan kata kunci judul buku yang ingin dihapus: ";
    getline(cin, keyword);

    bool found = false;
    for (auto it = daftarBuku.begin(); it != daftarBuku.end(); ++it) {
        if (it->judul.find(keyword) != string::npos) {
            daftarBuku.erase(it);
            cout << "Buku dengan judul \"" << keyword << "\" berhasil dihapus." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Buku dengan judul \"" << keyword << "\" tidak ditemukan." << endl;
    }
}

int main() {
    int pilihan;

    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah Buku Baru" << endl;
        cout << "2. Tampilkan Daftar Buku" << endl;
        cout << "3. Cari Buku" << endl;
        cout << "4. Hapus Buku" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                tambahBuku();
                break;
            case 2:
                tampilkanDaftarBuku();
                break;
            case 3:
                cariBuku();
                break;
            case 4:
                hapusBuku();
                break;
            case 5:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih menu yang tersedia." << endl;
                break;
        }

        cout << endl;
    } while (pilihan != 5);

    return 0;
}