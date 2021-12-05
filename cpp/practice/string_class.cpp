#include<bits/stdc++.h>
using namespace std;

int main () {
    string s1 = "Hello";
    string s2 = "World";

    // Reteurn length/Size of string
    cout << s1.size() <<endl;
    cout << s2.length() <<endl; 

    // concatenate string using + operator
    s1 = s1 + s2;
    cout << s1 << endl;

    // append string
    s1.append("Geeks");
    cout << s1 << endl;


    string s3 = "HelloWorldGeeks";
    // compare two strings
    if (s1.compare(s3) == 0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }


    // substring of string s1
    // substr(pos, length_of_substring)
    string sub = s1.substr(0, 5);
    cout << sub << endl; // Hello


    // insert into string
    // insert(pos, string)
    s1.insert(10, "For");
    cout << s1 << endl; // HelloWorldForGeeks


    string target = "World";
    // find a target string in s1
    size_t position = s1.find(target);
    if ( position != string::npos ) {
        cout << "Found at position: " << position << endl;
    } else {
        cout << "Not found" << endl;
    }
}