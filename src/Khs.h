#ifndef KHS_H
#define KHS_H
#include <iostream>
#include <vector>
#include "MataKuliah.h"
class Khs
{
public:
    vector<MataKuliah> mataKuliah;
    string student;
    Khs(string student, MataKuliah mk)
    {
        this->student = student;
        this->mataKuliah.push_back(mk);
    }
    // void display()
    // {
    //     MataKuliah matkul = mhs.khs->mataKuliah;
    //     for (MataKuliah mk : matkul)
    //     {
    //         cout << "\t\t\t " << mk.name;
    //     }
    // }
};
#endif