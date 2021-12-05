#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[], int size) {
    int minVal_index;
    for (int i=0; i<size; i++) {
        minVal_index = i;
        for (int j=i+1; j<size; j++) {
            if (arr[j] < arr[minVal_index]) {
                minVal_index = j;
            }
        }
        swap(&arr[i], &arr[minVal_index]);
    }
}

int main() {
    int arr[] = {9, 8, 7, 2, 5, 4, 3, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, size);
    for (int i=0; i<size; i++) cout << arr[i] << " " ;
}