#include <iostream>
/*function*/
using namespace std;
int tambah(int x,int y){
    int hasil;
    hasil = x + y;
    return hasil;
}
int kurang(int x,int y){
    int hasil;
    hasil = x - y;
    return hasil;
}
int totalArray(int a[50],int b){
    int hasil;
    for(int i=0; i<=b; i++){
        hasil += a[i];
    }
    return hasil;
}
int rataArray(int a[50],int b){
    int hasil;
    hasil = totalArray(a,b)/b;
    return hasil;
}
int main()
{
    int a[50], b;
    //Penjumlahan 2 bilangan
    cout << "Penjumlahan\n";
    cout << tambah(4,9)<<endl;
    //Pengurangan 2 bilangan
    cout << "Pengurangan\n";
    cout << kurang(10,5)<<endl;
    //Penjumlahan total value array
    cout << "Total Value Array\n";
    cout << "Masukkan jumlah bilangan =  ";
    cin >> b;
    for(int i=0; i<b; i++){
        cin >> a[i];
    }
    cout << totalArray(a,b)<<endl;
    //Rata-rata value array
    cout << "Rata-rata Value Array\n";
    cout << rataArray(a,b);

    return 0;
}
