#include<bits/stdc++.h>
using namespace std;

void moveToOneSide(int arr[], int size, int num) {
    int readStream = size-1, writeStream = size-1;
 
    while (readStream >= 0) {
        if (arr[readStream] != num) {
            arr[writeStream] = arr[readStream];
            writeStream--; readStream--;
        } else {
            readStream--;
        }
    }
    while (writeStream >= 0) {
        arr[writeStream] = num;
        writeStream--;
    }
 
    for (int i = 0; i<size; i++) cout << arr[i] << " " ;
}

int main() {
    int arr[] = {2, 4, 0, 10, 0, 32, 1, 0, 99, 2, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 0;
    moveToOneSide(arr, size, num);
    return 0;
}