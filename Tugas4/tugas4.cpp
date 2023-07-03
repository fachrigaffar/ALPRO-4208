#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int binarySearch(vector<int> &arr, int x)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
int linearSearch(vector<int> &arr, int y)
{
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == y) {
            return i;
        }
    }
    return -1;
}
int main()
{
    time_t now = time(0); // untuk menghitung waktu saat ini
    cout << "Waktu sekarang adalah " << ctime(&now) << endl;
    vector<int> arr = {64, 25, 12, 22, 11};

    int x = 22;
    int result = binarySearch(arr, x);
    if (result == -1)
    {
        cout << "Elemen tidak ditemukan";
    }
    else
    {
        cout << "Elemen ditemukan pada indeks ke-" << result;
    }

    cout << "\n-------------------" << endl;

    int y = 11;
    int result1 = linearSearch(arr, y);
    if (result1 == -1)
    {
        cout << "Elemen tidak ditemukan";
    }
    else
    {
        cout << "Elemen ditemukan pada indeks ke-" << result1;
    }

    cout << "\n-------------------" << endl;

    clock_t tStart = clock(); //untuk menghitung durasi eksekusi sebuah progam didalamnya (permbuka progam)
    selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    clock_t tEnd = clock(); //penutup progam
    double elapsed = double(tEnd - tStart) / CLOCKS_PER_SEC; // perhitungan durasi
    cout << "\nDurasinya adalah " << elapsed << " detik" << endl;

    cout << "-------------------" << endl;

    clock_t tStart2 = clock();
    bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    clock_t tEnd2 = clock(); 
    double elapsed2 = double(tEnd2 - tStart2) / CLOCKS_PER_SEC;
    cout << "\nDurasinya adalah " << elapsed2 << " detik" << endl;

    cout << "-------------------" << endl;

    clock_t tStart3 = clock(); 
    insertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    clock_t tEnd3 = clock();
    double elapsed3 = double(tEnd3 - tStart3) / CLOCKS_PER_SEC;
    cout << "\nDurasinya adalah " << elapsed3 << " detik" << endl;
    return 0;
}