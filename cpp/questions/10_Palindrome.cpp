#include<bits/stdc++.h>
using namespace std;

string checkIfPalindrome(string str) {
    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    int left=0;
    int right=str.length()-1;
    while (right > left) {
        if ( tolower(str[left++]) != tolower(str[right--]) ) {
            return "false";
        }
    }
    return "true";
}

int main () {
    string str = "Level";
    cout<<checkIfPalindrome(str);
}