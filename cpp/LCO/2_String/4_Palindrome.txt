#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int len) {
    int left=0, right=len-1;
    while (left++ <= right--) {
        if (str[left] != str[right]) return false;
    }
    return true; 
}

int main() {
    string str = "abcba";
    if (isPalindrome(str, str.length())) {
        cout << "Is a Palindrome";
    } else {
        cout << "Not a Palindrome";
    }
}