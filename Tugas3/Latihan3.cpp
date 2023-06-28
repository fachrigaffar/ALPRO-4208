#include <iostream>
using namespace std;
/*(Latihan 3) hitung fungsi menggunakan typedef struct dengan member luas persegi panjang, luas lingkaran, volume kerucut, volume bola*/
typedef struct rumus
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

int main()
{
    cout << "Luas persegi panjang :" << print.persegiPanjang(10,5) << endl;
    cout << "Luas lingkaran :" << print.lingkaran(7) << endl;
    cout << "Volume kerucut : " << print.kerucut(10,7) << endl;
    cout << "Volume bola : " << print.bola(7) << endl;

    return 0;
}