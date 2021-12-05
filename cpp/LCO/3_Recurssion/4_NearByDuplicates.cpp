#include<bits/stdc++.h>
using namespace std;

string NearByDuplicates(string str) {
    if (str.length() == 1) return str;
    if (str[0] != str[1]) {
        return str[0] + NearByDuplicates(str.substr(1));
    } else {
        return NearByDuplicates(str.substr(1));
    }
}

int main() {
    string str = "myllcccoo";
    cout << NearByDuplicates(str);
}