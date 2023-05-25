#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    if(b==0)
        return a;
    else
        return a+penjumlahan(1, b-1);
}
int pengurangan(int a, int b){
    if(b==0)
        return a;
    else
        return pengurangan(a-1, b-1);
}
int perkalian(int a, int b){
    if(b==0)
        return 0;
    else
        return a+(perkalian(a, b-1));
}
int pembagian(int a, int b){
    if(a<b)
        return 0;
    else
        return 1+pembagian(a-b, b);
}
int pangkat(int a, int n){
    if(n==0)
        return 1;
    else
        return a*pangkat(a,n-1);
}

int main()
{
    cout << penjumlahan(2,3)<< endl;
    cout << pengurangan(5,3)<< endl;
    cout << perkalian(3,3)<< endl;
    cout << pembagian(10,2)<< endl;
    cout << pangkat(5,2)<< endl;
    return 0;
}
