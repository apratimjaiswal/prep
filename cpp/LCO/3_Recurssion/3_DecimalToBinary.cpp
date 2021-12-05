#include<bits/stdc++.h>
using namespace std;

string convertToBinary(int n) {
    if (n <= 1) return to_string(n);
    return convertToBinary((n / 2)) + convertToBinary((n % 2));
}

string convertToBinary_without_recursion(int n) {
    int remainder = 0; string result;
    while (n != 0) {
        remainder = n % 2;
        n = n / 2;
        result += to_string(remainder);
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Binary representation is: " << convertToBinary(n) << endl;
    cout << "Binary representation is: " << convertToBinary_without_recursion(n);
}