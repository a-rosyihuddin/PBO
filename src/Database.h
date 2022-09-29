#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <vector>
#include "Mahasiswa.h"
#include "Prodi.h"
#include "Matakuliah.h"
class Database
{
private:
    vector<Prodi> listProdi = {
        Prodi("TIF", "Teknik Informatika"),
        Prodi("TI", "Teknik Industri"),
        Prodi("TM", "Teknik Mesin"),
        Prodi("SI", "Sistem Informasi"),
    };

    vector<Mahasiswa> listMhs = {
        Mahasiswa("Ahmad Rosyihuddin", "200411100126", "Gresik", 5, &listProdi[0]),
        Mahasiswa("Ahmad Fanani", "200411100143", "Jombang", 5, &listProdi[1]),
        Mahasiswa("Ari Andi Mustofa", "200411100112", "Bojonegoro", 5, &listProdi[2]),
    };

    vector<MataKuliah> listMatkul = {
        MataKuliah("IF200", "Pemrograman Berorientasi Objek", 3),
        MataKuliah("IF201", "Pemrograman Aplikasi WEB", 3),
        MataKuliah("IF201", "Basis Data", 3),
    };

public:
    Database();
};
#endif