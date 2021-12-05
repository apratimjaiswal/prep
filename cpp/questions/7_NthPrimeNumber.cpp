#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100000;

int nthPrime (int n, int maxSize) {
    vector<int> v;
    bool prime[maxSize+1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i*i < maxSize; i++) {
        if (prime[i] == true) {
            for (int j = i*i; j<maxSize; j=j+i) { // 2, 4, 6, 8, 10...
                prime[j]=false;
            }
        }
    }
    
    for (int i=2; i<maxSize; i++) {
        if (prime[i] == true) {
            //v[j++]=prime[i];
            v.push_back(i);
        }
    }
    return v[n-1];
}

int main () {
    int maxSize = MAX_SIZE;
    int n;
    cin>>n;
    cout<<nthPrime(n, maxSize);
}

/**
 * 
--------------------------------------------------------------------------------------------------------------------------
Questions: Find nth Prime Number
---------------------------------------------------------------------------------------------------------------------------                        
n-th Prime Number
                            
  You are given an integer n, The task is to find the n-th prime number.
  
 Input : 1
 Output: 2
 ---------------
 Input  : 5
 Output: 11
 ---------------
 Input : 1049
 Output: 8377

*/