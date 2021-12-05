#include<bits/stdc++.h>
using namespace std;

void ReverseString(string str) {
    stringstream ss(str);
    stack<string> stackmemory;
    string word;
    while(!ss.eof()) {
        ss>>word;
        stackmemory.push(word);
    }
    string result;
    while(!stackmemory.empty()) {
        result = result + stackmemory.top();
        stackmemory.pop();
        if(!stackmemory.empty()) {
            result = result + " ";
        }
    }
    cout << result;
}

int main() {
    string str = "Hello there";
    ReverseString(str);
    return 0;
}