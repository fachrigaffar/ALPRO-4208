#include <iostream>

using namespace std;

void bubble(int arr[], int n){
    for(int step=0; step<n-1; step++){
        for(int i=0; i<n-step-1; i++)
        if(arr[i]<arr[i+1]){
            swap(arr[i+1],arr[i]);
        }
    }
}

void selection(int arr[], int n){
    for(int step=0; step<n-1; step++){
        int min_idx=step;
        for(int i=step+1; i<n; i++){
            if(arr[i]>arr[min_idx])
            min_idx = i;
        }
    swap(arr[min_idx],arr[step]);
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << " " << arr[i];
    }
    cout << endl;
}

bool isGanjil(int bil){
    if(bil%2==1){
    return 1;
    }
return 0;
}
void genap(int arr[], int size){
    int temp=9999;
    int index;
    for(int i=0; i<size; i++){
        if(!isGanjil(arr[i])){
            if(arr[i]<temp){
                temp=arr[i];
                index=i;
            }
        }
    }
    cout << " " << temp << " dengan index ke " << index;
}
int main()
{
    int A[50];
    int size;
    cout << "Masukkan size array = ";
    cin >> size;
    for(int i=0; i<size; i++){
        cout << "Masukkan array index ke " << i+1 << " = ";
        cin >> A[i];
    }

    cout << "\nSoal no 1 :\n" << endl;
    genap(A, size);

    cout << endl;
    cout << "--------------------";
    cout << endl;

    int arr[]={1,1,3,4,2,5,2};
    int n = sizeof(arr)/sizeof(0);

    cout << "Soal no 2 :\n" << endl;
    bubble(arr,n);    print(arr,n);
    cout << endl;    selection(arr,n);
    print(arr,n);
    cout << endl;
    cout << "--------------------";


    return 0;
}
