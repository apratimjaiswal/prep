#include<bits/stdc++.h>
using namespace std;

void f() {
    static int i=1;
    ++i;
    cout<<i<<endl;
}
int main () {
    f();
    f();
    f();
}