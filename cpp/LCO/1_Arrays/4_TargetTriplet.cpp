#include<bits/stdc++.h>
using namespace std;

void targetTriplet (int arr[], int size, int target) {
    int i = 0;
    int left = i+1, right = size-1, sum = 0;

    while (i < size) {
        while (left < right) {
            sum = arr[i] + arr[left] + arr[right];
            if (sum == target) {
                cout << "Triplet is: " << arr[i] << " " << arr[left] << " " << arr[right] <<endl;
                left++; right--;
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
        i++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 14;
    targetTriplet(arr, size, target);
    return 0;
}