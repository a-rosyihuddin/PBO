#ifndef KHS_H
#define KHS_H
#include <iostream>
#include "Matakuliah.h"
class Khs
{
public:
    MataKuliah *mataKuliah;
    string student;
    int nilai;
    Khs(string student, int nilai, MataKuliah *mataKuliah)
    {
        this->mataKuliah = mataKuliah;
        this->student = student;
        this->nilai = nilai;
    }
    void display()
    {
        cout << "Nama Mahasiswa : " << student << endl;
        cout << "Mata Kuliah : " << mataKuliah->name << endl;
        cout << "Nilai : " << nilai << endl;
    }
};
#endif