#include<bits/stdc++.h>
using namespace std;

int trailingZeroes (int n) {
    int count=0;
    for (int i=5; n/i>=1; i=i*5) {
        count += n/i;
    }
    return count;
}

int main () {
    int n=10;
    cout<<trailingZeroes(n);
}

/**
 * Trailing zeroes in a Factorial
 * 5! = 120
 * 10! = 328800
 * 100! has 24 Trailing zeroes
*/