#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int num, int low, int high) {
    int mid = -1;
    
    while (low <= high) {
        mid = low + (high - low)/2;
        if (arr[mid] == num) {
            return mid;
        } else if (arr[mid] > num) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = 4;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << binarySearch(arr, num, 0, len-1);
}