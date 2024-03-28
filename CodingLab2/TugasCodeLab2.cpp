#include <iostream>
#include <string>

struct Pegawai {
    std::string nama;
    std::string departemen;
    int gaji;
};

void naikGaji(Pegawai& p) {
    p.gaji = static_cast<int>(p.gaji * 1.1);
}

int main() {
    Pegawai pegawai1 = {"Budi", "IT", 5000000};

    // Cetak informasi pegawai sebelum kenaikan gaji
    std::cout << "Informasi Pegawai Sebelum Kenaikan Gaji:" << std::endl;
    std::cout << "Nama: " << pegawai1.nama << std::endl;
    std::cout << "Departemen: " << pegawai1.departemen << std::endl;
    std::cout << "Gaji: " << pegawai1.gaji << std::endl;

    // Panggil fungsi naikGaji
    naikGaji(pegawai1);

    // Cetak informasi pegawai setelah kenaikan gaji
    std::cout << "\nInformasi Pegawai Setelah Kenaikan Gaji:" << std::endl;
    std::cout << "Nama: " << pegawai1.nama << std::endl;
    std::cout << "Departemen: " << pegawai1.departemen << std::endl;
    std::cout << "Gaji: " << pegawai1.gaji << std::endl;

    return 0;
}

