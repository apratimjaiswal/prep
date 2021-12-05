#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i=0; i<size; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {9, 8, 7, 2, 5, 4, 3, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int i=0; i<size; i++) cout << arr[i] << " " ;
}