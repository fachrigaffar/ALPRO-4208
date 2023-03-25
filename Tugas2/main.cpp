#include <iostream>
using namespace std;

bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int f);
int sumEven(int a[]);
int sumOdd(int a[]);
int maxN(int a, int b);
int minN(int a, int b);
int maxArray(int a[]);
int minArray(int a[]);
bool isFound(int x, int a[]);
void swapN(int a, int b);

int main()
{
    int a[]= {7,38,15,24,27};
    cout << "Is Even = ";
    cout << isEven(10) << endl;
    cout << "Is odd = ";
    cout << isOdd(9) << endl;
    cout << "Is factor = ";
    cout << isFactor(10,5) << endl;
    cout << "Sum Even = ";
    cout << sumEven(a) << endl;
    cout << "Sum Odd = ";
    cout << sumOdd(a) << endl;
    cout << "Max Number = ";
    cout << maxN(7,3) << endl;
    cout << "Min Number = ";
    cout << minN(7,3) << endl;
    cout << "Max Array = ";
    cout << maxArray(a) << endl;
    cout << "Min Array = ";
    cout << minArray(a) << endl;
    cout << "Is Found = ";
    cout << isFound(15,a) << endl;
    cout << "Swap Number = ";
    swapN(6,9);
    return 0;
}
bool isEven(int x){
   int temp;
   if(x%2==0) temp=true;
   return temp;
}

bool isOdd(int x){
   int temp;
   if(x%1==0) temp=false;
   return temp;
}

bool isFactor(int x, int f){
    int temp;
    temp = x%f==0;
    return temp;
}

int sumEven(int a[]){
    int temp;
    for(int i=0; i<5; i++){
        if(a[i]%2==0) temp += a[i];
    }
    return temp;
}
int sumOdd(int a[]){
    int temp;
    for(int i=0; i<5; i++){
        if(a[i]%1==0) temp += a[i];
    }
    return temp;
}

int maxN(int a, int b){
    int temp;
    if(a>b){
        temp=a;
    }else {
        temp=b;
    }
    return temp;
}

int minN(int a, int b){
    int temp;
    if(a<b){
        temp=a;
    }else {
        temp=b;
    }
    return temp;
}

int maxArray(int a[]){
    int temp=0;
    int len = sizeof(a)/(sizeof(a[0])); //tidak disarankan menggunakan sizeof
    for(int i=0; i<5; i++) {
        if(a[i] > temp) temp = a[i];
    }
    return temp;
}

int minArray(int a[]){
    int temp=9999;
    for(int i=0; i<5; i++) {
        if(a[i] < temp) temp = a[i];
    }
    return temp;
}

bool isFound(int x, int a[]){
    int temp;
    for(int i=0; i<5; i++){
        if(a[i]==x) temp = a[i];
    }
    return temp;
}

void swapN(int a, int b){
    cout << b << "," << a;
}
