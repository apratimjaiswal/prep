#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void InsertionSort(int arr[], int size) {
    int j=0;
    for (int i=1; i<=size; i++) {
        j=i-1;
        while (j>0 && arr[j] < arr[j-1]) {
            swap(&arr[j], &arr[j-1]);
            j = j-1;
        }
    }
}

int main() {
    int arr[] = {9, 8, 7, 2, 5, 4, 3, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, size);
    for (int i=0; i<size; i++) cout << arr[i] << " " ;
}