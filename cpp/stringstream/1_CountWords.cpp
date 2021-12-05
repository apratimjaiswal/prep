#include<bits/stdc++.h>
using namespace std;

int countWords (string str) {
    stringstream ss(str);
    string word;
    
    int count=0;
    // Running loop till end of stream
    while (!ss.eof()) {
        ss>>word;
        count++;
    }
    return count;
}

int main () {
    string str = "This is a Test string";
    cout<<"Number of words in the given string are: "<<countWords(str);
}