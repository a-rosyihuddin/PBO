#ifndef PRODI_H
#define PRODI_H
#include <iostream>
class Prodi
{
public:
    string name, code;
    Prodi(string code, string name)
    {
        this->name = name;
        this->code = code;
    }
    // void display()
    // {
    //     cout << "Nama Mahasiswa : " << mahasiswa->name << endl;
    //     cout << "Alamat : " << mahasiswa->address << endl;
    //     cout << "Nama Prodi : " << name << endl;
    //     cout << "Kode Prodi : " << code << endl;
    //     cout << "Semester : " << mahasiswa->semester << endl;
    //     // cout << "Mata Kuliah : " << mahasiswa->khs->mataKuliah->name << endl;
    //     // cout << "Nilai : " << mahasiswa->khs->nilai << endl;
    // }
};
#endif