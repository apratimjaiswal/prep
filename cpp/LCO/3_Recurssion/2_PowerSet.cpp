#include<bits/stdc++.h>
using namespace std;

// Strings
int Subsets_strings(string str, int index, string result) {
    int len = str.length();
    if (index == len) {
        if (result.length() > 0) cout << result << endl;
        else cout << "{}" << endl;
        return 0;
    }

    Subsets_strings(str, index+1, result + str[index]);
    Subsets_strings(str, index+1, result);
    return 0;
}

// Arrays
int Subsets_array(int arr[], int size, int index, string result) {
    if (index == size) {
        if (result.length() > 0) cout << result << endl;
        else cout << "{}" << endl;
        return 0;
    }

    Subsets_array(arr, size, index+1, result + to_string(arr[index]));
    Subsets_array(arr, size, index+1, result);
    return 0;
}

int main() {
    // Strings
    string inputString = "abc";
    int index = 0;
    string result = "";
    Subsets_strings(inputString, index, result);

    // Arrays
    int inputArray[] = {1, 2, 3};
    int size = sizeof(inputArray)/sizeof(inputArray[0]);
    // Subsets_array(inputArray, size, index, result);
}