#include<bits/stdc++.h>
using namespace std;

int * f() {
    int x = 5;
    return &x;
}

int main () {
    cout << *f();
}