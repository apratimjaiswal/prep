#include<bits/stdc++.h>
using namespace std;

int fib_plainRecursion(int n) {
    // Bad implementation - Does a lot of Repeated work
    if (n <= 2) return n-1;
    return fib_plainRecursion(n-1) + fib_plainRecursion(n-2);
}

int fib_memoization(int n, unordered_map<int, int> map) {
    // We can avoid the repeated work done in method 1 by storing the Fibonacci numbers calculated so far
    if (n == 1) return map[1];
    if (map[n] > 0) {
        return map[n];
    } else {
        map[n] = fib_memoization(n-1, map) + fib_memoization(n-2, map);
        return map[n];
    }
}

int fib_simpleLoop(int n) {
    if (n <= 2) return n-1;
    int a = 0, b = 1, c = 0;
    for (int i=2; i<n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    unordered_map <int, int> map;
    map[1] = 0, map[2] = 1;
    int n;
    cout << "Enter nth term: ";
    cin >> n;
    cout << "nth Fibonacci term (Using Memoization): " << fib_memoization(n, map) << endl;
    cout << "nth Fibonacci term (Using Plain Recusion): " << fib_plainRecursion(n) << endl;
    cout << "nth Fibonacci term (Using Simple Loop): " << fib_simpleLoop(n) << endl;
}

/**
 * Approach 1: Using RECURSION and MOMOIZATION using unordered_map
 * 
 * Approach 2: Using plain RECURSION
 * 
 *                         fib(5)   
                     /                \
               fib(4)                fib(3)   
             /        \              /       \ 
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)

    Approach 3: Most simple [O(n) time and O(1) space]

*/