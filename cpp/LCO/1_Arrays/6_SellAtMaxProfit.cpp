#include<bits/stdc++.h>
using namespace std;

int getMin(int a, int b) { return (a<b ? a : b); }
int getMax(int a, int b) { return (a>b ? a : b); }

int MaxProfit(int arr[], int len) {
    int globalSmall = arr[0], globalProfit = -1;
    int curr_profit = 0;

    for (int i=0; i<len; i++) {
        globalSmall = getMin(arr[i], globalSmall);
        curr_profit = arr[i] - globalSmall;
        globalProfit = getMax(curr_profit, globalProfit);
    }
    
    return globalProfit;
}

int main() {
    int arr[] = {8, 9, 5, 6, 12, 10, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Max profit is: " << MaxProfit(arr, size);
    return 0;
}