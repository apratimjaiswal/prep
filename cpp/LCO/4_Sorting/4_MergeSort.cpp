#include<bits/stdc++.h>
using namespace std;

int * MergeSort(int arr[], int low, int high) {
    if (low < high) {
        
        int mid = low + ((high-low)/2);
        cout<< "left: " << low << " Mid: " << mid << " right: " << high << endl; 

        auto leftLen = mid - low + 1;
        auto rightLen = high - mid;
        
        auto *leftArray = new int[leftLen], *rightArray = new int[rightLen];
        cout<< "Length of Arrays - left & right: " << leftLen << " - " << rightLen << endl; 
        
        leftArray = MergeSort(arr, low, mid);
        rightArray = MergeSort(arr, mid+1, high);

        int i = 0, j = 0, k = 0;
        while (i < leftLen && j < rightLen) {
            if (leftArray[i] < rightArray[j]) {
                arr[k] = leftArray[i];
                cout << leftArray[i] << " - " << rightArray[j] << " | " << arr[k] << endl;
                i++;
            } else {
                arr[k] = rightArray[j];
                cout << leftArray[i] << " - " << rightArray[j] << " | " << arr[k] << endl;
                j++;
            }
            k++;
        }
        return arr;
    }
    return arr;
}

int main() {
    int arr[] = {9, 8, 7, 2, 5, 4, 3, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr, 0, size-1);
    for (int i=0; i<size; i++) cout << arr[i] << " " ;
}