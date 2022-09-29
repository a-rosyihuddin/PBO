#ifndef MATAKULIAH_H
#define MATAKULIAH_H
#include <iostream>

using namespace std;
class MataKuliah
{
public:
    string name, code;
    int sks, nilai;
    MataKuliah(string code, string name, int sks)
    {
        this->name = name;
        this->code = code;
        this->sks = sks;
    }

};
#endif