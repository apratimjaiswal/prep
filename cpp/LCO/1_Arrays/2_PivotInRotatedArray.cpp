#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low, int high) {
    int mid = -1;
    while (low <= high) {
        mid = low + ((high - low)/2);
        if (arr[mid + 1] < arr[mid]) {
            return (mid+1);
            // return arr[mid+1];
        }
        if (arr[mid] < arr[mid-1]) {
            return mid;
        }

        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 16, 18, 24, 3, 5, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << findPivot(arr, 0, size-1);
}