#include <iostream>
using namespace std;

typedef struct mahasiswa{
    string nama, nim, jurusan;
    int tahunLulus;
};

int main()
{
    // Dinamis
    int row;
    cout << "Masukkan jumlah murid : ";
    cin >> row;
    mahasiswa lulus[row][3];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                cout << "Masukkan nim murid ke-" << i + 1 << " = ";
                cin >> lulus[i][j].nim;
            }
            if (j == 1)
            {
                cout << "Masukkan nama murid ke-" << i + 1 << " = ";
                cin >> lulus[i][j].nama;
            }
            if (j == 2)
            {
                cout << "Masukkan jurusan murid ke-" << i + 1 << " = ";
                cin >> lulus[i][j].jurusan;
            }
            if (j == 3)
            {
                cout << "Masukkan tahun lulus murid ke-" << i + 1 << " = ";
                cin >> lulus[i][j].tahunLulus;
            }
        }
    }

    cout << "NIM             |Nama           |Jurusan            |Tahun Lulus            |" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                cout << lulus[i][j].nim << "|";
            }
            if (j == 1)
            {
                cout << lulus[i][j].nama << "           |";
            }
            if (j == 2)
            {
                cout << lulus[i][j].jurusan << "            |";
            }
            if (j == 3)
            {
                cout << lulus[i][j].tahunLulus << "             |"
                     << endl;
            }
        }
    }
    return 0;
}