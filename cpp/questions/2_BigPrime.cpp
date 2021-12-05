//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getBigPrime (int n, int list[], int k) {
    queue<int> q1, q2, q3;
    int x=1;

    for (int i=1; i<=k; i++) {
        q1.push(x*list[0]);
        q2.push(x*list[1]);
        q3.push(x*list[2]);

        x = min(q1.front(), min(q2.front(), q3.front()));

        if (x == q1.front()) {
            q1.pop();
        }
        if (x == q2.front()) {
            q2.pop();
        }
        if (x == q3.front()) {
            q3.pop();
        }
    }
    return x;
}

int main () {
    int n=3;
    int prime[] = {2,3,5};
    int k=3;
    cout<<getBigPrime(3, prime, k);
}

/**
 * Question: BIG PRIME NUMBER

Dylan loves prime numbers very much. He has n prime numbers and he can use any prime number
infinite number of times. When he playes with his prime numbers he uses his prime numbers
and multiplies them with each other and make a number.

For example, If Dylan has prime numbers 2,3 and 5 then he can make:
2,3,4(2*2),5,6(2*3),8(2*2*2),9(3*3),10,12,15,...

He can use his prime numbers infinite number of times. One day his father came and saw
his son playing with numbers and asked him the k-th number he can make from his prime numbers.

Help Dylan in finding the k-th number.

Example-1
---------
Input1 : 3 
Input2 : {2,3,5}
Input3 : 3 
OUTPUT : 4

Example-2
---------
Input1 : 3 
Input2 : {2,3,5}
Input3 : 7 
OUTPUT : 9 
 * 
*/