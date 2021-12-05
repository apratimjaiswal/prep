#include<bits/stdc++.h>
using namespace std;

int findSmallestCommon(int arr1[], int len1, int arr2[], int len2, int arr3[], int len3) {
    
    int i=0, j=0, k=0; 
    while (i < len1 && j < len2 && k < len3) {
        if (arr1[i] == arr2[j] && arr1[i] == arr3[k]) {
            return arr1[i];
        } else if (arr1[i] <= arr2[j] && arr1[i] <= arr3[k]) {
            i++;
        } else if (arr2[j] <= arr1[i] && arr2[j] <= arr3[k]) {
            j++;
        } else if (arr3[k] <= arr1[i] && arr3[k] <= arr2[j]) {
            k++;
        }
    }
    return -1;
}

int main() {
    int arr1[] = {2, 5, 7, 9, 11, 30};
    int arr2[] = {0, 3, 5, 20, 21, 30};
    int arr3[] = {1, 2, 3, 4, 5, 23};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int len3 = sizeof(arr3)/sizeof(arr3[0]);
    cout << findSmallestCommon(arr1, len1, arr2, len2, arr3, len3);
}