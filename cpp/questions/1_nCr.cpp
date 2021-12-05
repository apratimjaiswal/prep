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
    cout<<binomialCoefficient(5,2);
}

/**
 * Space and time efficient Binomial Coefficient
Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). 
Example: 
 

Input: n = 4 and k = 2
Output: 6
Explanation: 4 C 2 is 4!/(2!*2!) = 6

Input: n = 5 and k = 2
Output: 10
Explanation: 5 C 2 is 5!/(3!*2!) = 20
*/