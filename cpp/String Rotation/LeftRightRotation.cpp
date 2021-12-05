#include<bits/stdc++.h>
using namespace std;

string LeftRotation (string str, int n) {
    reverse(str.begin(), str.begin()+n);
    reverse(str.begin()+n, str.end());
    reverse(str.begin(), str.end());

    return str;
}

string RightRotation (string str, int n) {
    return LeftRotation(str, str.length()-n);
}

int main () {
    string str = "Left Rotation";
    cout<<LeftRotation(str, 2)<<"\n";
    str = "Right Rotation";
    cout<<RightRotation(str, 2);
}