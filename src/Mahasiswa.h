#ifndef MAHASISWA_H
#define MAHASISWA_H
#include <iostream>
#include <vector>
#include "Khs.h"
#include "Prodi.h"
using namespace std;
class Mahasiswa
{
public:
    vector<Khs> *khs;
    Prodi *prodi;
    string name, address, nim;
    int semester;
    Mahasiswa(string name, string nim, string address, int semester, Prodi *prodi)
    {
        this->name = name;
        this->address = address;
        this->semester = semester;
        this->nim = nim;
        this->prodi = prodi;
    }

    // void display()
    // {
    //     cout << "Nama : " << name << endl;
    //     cout << "Alamat : " << address << endl;
    //     cout << "Semester : " << semester << endl;
    //     cout << "Mata Kuliah : " << khs->mataKuliah->name << endl;
    //     cout << "Nilai : " << khs->nilai << endl;
    // }
};
#endif