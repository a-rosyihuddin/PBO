#include <iostream>
#include "Khs.h"
#include "Matakuliah.h"
#include "Mahasiswa.h"
#include "Prodi.h"
#include "Database.h"
using namespace std;

int main(int argc, char const *argv[])
{

    Database database;

    // Mahasiswa Ke-1
    // MataKuliah pbo = MataKuliah("Pemrograman Berorientasi Objek", "PBO", 3);
    // Khs k1 = Khs("Ahmad Rosyihuddin", 90, &pbo);
    // Mahasiswa rosik = Mahasiswa("Ahmad Rosyihuddin", "Gresik", 3, &k1);
    // Prodi t_Informatika = Prodi("Teknik Informatika", "TIF", &rosik);
    // rosik.display();

    // cout << "========================" << endl;
    // // Mahsiswa Ke-2
    // MataKuliah alpro = MataKuliah("Algoritma Pemrograman", "Alpro", 3);
    // Khs k2 = Khs("Andi Mustofa", 85, &alpro);
    // Mahasiswa andi = Mahasiswa("Andi Mustofa", "Bojonegoro", 5, &k2);
    // Prodi t_Industri = Prodi("Teknik Industri", "TI", &andi);
    // andi.display();
    return 0;
}
