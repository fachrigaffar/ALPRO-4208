#include <iostream>
using namespace std;
/*(Latihan 1) hitung fungsi menggunakan struct dengan member luas persegi panjang, luas lingkaran, volume kerucut, volume bola*/
/*(Latihan 2) membuat structure sepeda dengan member Merk = “Polygon”,Type = “Sepeda Gunung”,Tahun = 2013, Harga = “2.000.000”*/
struct rumus
{
    int persegiPanjang(int p, int l){
        int temp = p * l;
        return temp;  
    }
    int lingkaran(int r){
        int temp = 22 * r * r / 7;
        return temp;
    }
    int kerucut(int t, int r){
        int temp = 1 * 3.14 * r * r * t / 3;
        return temp;
    }
    int bola(int r){
        int temp = 4 * 3.14 * r * r *r / 3;
        return temp;
    }
};
struct rumus print;

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
    cout << "Luas persegi panjang :" << print.persegiPanjang(10,5) << endl;
    cout << "Luas lingkaran :" << print.lingkaran(7) << endl;
    cout << "Volume kerucut : " << print.kerucut(10,7) << endl;
    cout << "Volume bola : " << print.bola(7) << endl;

    cout << endl;

    sepeda *pSepeda = &cetak;
    cout << "Merk : " << pSepeda->merk << endl;
    cout << "type : " << pSepeda->type << endl;
    cout << "harga : " << pSepeda->harga << endl;
    cout << "tahun : " << pSepeda->tahun << endl;
    return 0;
}