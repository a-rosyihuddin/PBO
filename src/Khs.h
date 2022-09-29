#ifndef KHS_H
#define KHS_H
#include <iostream>
#include "Matakuliah.h"
class Khs
{
public:
    vector<MataKuliah> *mataKuliah = {};
    string student;
    int nilai;
    Khs(string student, int nilai, vector<MataKuliah> *mataKuliah)
    {
        this->student = student;
        this->nilai = nilai;
        mataKuliah->push_back(mataKuliah);
    }
    void display()
    {
        cout << "Nama Mahasiswa : " << student << endl;
        // cout << "Mata Kuliah : " << mataKuliah->name << endl;
        cout << "Nilai : " << nilai << endl;
    }
};
#endif