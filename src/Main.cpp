#include <iostream>
#include "Khs.h"
#include "MataKuliah.h"
#include "Mahasiswa.h"
#include "Prodi.h"
#include "Database.h"
using namespace std;

int main(int argc, char const *argv[])
{

    Database database;
    bool start = true;
    int pilihan;
    while (start)
    {
        cout << "==================SIAKAD TRUNOJOYO==================" << endl;
        cout << "1. Data Mahasiswa\n2. Data Matakuliah\n3. Data Prodi\n4. Exit" << endl;
        cout << "Pilihan >> ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            bool tambah = true;
            while (tambah)
            {
                // Display Data Mahasiswa
                database.displayMhs();
                cout << "[1]Tambah Data [2]Hapus Data [3]Edit Data [4]Kembali" << endl;
                cout << "====================================================" << endl;
                cout << "Pilihan >> ";
                cin >> pilihan;
                if (pilihan == 1)
                {
                    // Tambah Data Mahasiswa
                    database.tambahMhs();
                }
                else if (pilihan == 2)
                {
                    // Hapus Data Mahasiswa
                    database.hapusMhs();
                }
                else if (pilihan == 3)
                {
                    // Edit Data Mahasiswa
                }
                else if (pilihan == 4)
                {
                    tambah = false;
                }
                else
                {
                    cout << "\n====================================================" << endl;
                    cout << "Pilihan Tidak Tersedia" << endl;
                    cout << "====================================================\n";
                }
            }
        }

        else if (pilihan == 2)
        {
            database.displayMk();
            bool tambah = true;
            while (tambah)
            {
                // Display Data Mahasiswa
                database.displayMk();
                cout << "Pilihan >> ";
                cin >> pilihan;
                if (pilihan == 1)
                {
                    // Tambah Data Mahasiswa
                    database.tambahMk();
                }
                else if (pilihan == 2)
                {
                    // Hapus Data Mahasiswa
                    database.hapusMk();
                }
                else if (pilihan == 3)
                {
                    // Edit Data Mahasiswa
                }
                else if (pilihan == 4)
                {
                    tambah = false;
                }
                else
                {
                    cout << "\n====================================================" << endl;
                    cout << "Pilihan Tidak Tersedia" << endl;
                    cout << "====================================================\n";
                }
            }
        }
        else if (pilihan == 3)
        {
            database.displayProdi();
        }
        else if (pilihan == 4)
        {
            start = false;
        }
        else
        {
            cout << "\n====================================================" << endl;
            cout << "Pilihan Tidak Tersedia" << endl;
            cout << "====================================================\n";
        }
    }

    return 0;
}
