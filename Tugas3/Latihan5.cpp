#include <iostream>
using namespace std;

struct sepeda
{
    string merk = "sepeda";
    string type = "SepedaGunung";
    string harga = "2.000.000";
    int tahun = 2013;
};
struct sepeda cetak;

int main()
{
    sepeda *pSepeda = &cetak;
    cout << "Merk : " << pSepeda->merk << endl;
    cout << "type : " << pSepeda->type << endl;
    cout << "harga : " << pSepeda->harga << endl;
    cout << "tahun : " << pSepeda->tahun << endl;
    return 0;
}