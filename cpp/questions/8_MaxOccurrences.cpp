#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256;

char maxOccurrence (string str) {
    int size=ASCII_SIZE;
    int count[size] = {0};
    int max=1; char maxChar='0';

    for (int i=0; i<str.length(); i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            maxChar = str[i];
        }
    }
    return maxChar;
}

int main () {
    string str="abcd";
    cout<<maxOccurrence(str);
}