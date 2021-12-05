#include<bits/stdc++.h>
using namespace std;

string reverse (string str) {
    stack<string> stack;

    if (str.length() == 0) return str;    
    
    for (int i=0; i<str.length(); i++) {
        string word;
        if (str[i] == ' ') {
            continue;
        }
        while (i<str.length() && str[i] != ' ') {
            word += str[i];
            i++;
        }
        stack.push(word);
    }

    string result;
    while (!stack.empty()) {
        result += stack.top();
        stack.pop();
        if (!stack.empty()) {
            result += ' ';
        }
    }
    return result;
}

int main () {
    string str = "This is a Test string";
    cout<<reverse(str);
}

/**
 * Problem: Reverse String Word Wise

Input : Welcome to Nagarro
Output: Nagarro to Welcome
--------------------------------------------------------------------------------
Solution:
string s="Welcome to Nagarro"

    *                     *
    *                     *
    *  Nagarro     *
    *    to              *
    *  Welcome   *
    **************
      Stack st
     
     
string res= "Nagarro to Welcome"
*/