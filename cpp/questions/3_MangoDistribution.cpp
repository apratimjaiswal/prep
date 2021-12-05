#include<bits/stdc++.h>
using namespace std;

int binomialCoefficient (int n, int r) {
    int res = 1;
    if (r > n-r) {
        r=n-r;
    }
    for (int i=0; i<r; i++) {
        res *= n-i;
        res /= i+1;
    }
    return res;
}

int main () {
    int mangoes=7, persons=5;

    if (mangoes < persons) return 0;
    cout<<binomialCoefficient( (mangoes+persons-1), (persons-1) );
}

/**
 * Problem:Mango Distribution
Given a number of mangoes,m and number of persons,n. Find the number of ways 
to distribute identical mangoes among identical persons.

Input: m=2, n=2 
Output:3 (1,1) (2,0) (0,2)

Hints:(m+n-1)C(n-1)
*/