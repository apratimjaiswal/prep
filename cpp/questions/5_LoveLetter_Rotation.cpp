#include<bits/stdc++.h>
using namespace std;

int checkRotation (string str, int n) {
    stringstream ss(str);
    string word, temp;
    int count = 0;

    while (!ss.eof()) {
        ss>>word;
        temp = word;

        //  Friend does RIGHT ROTATION (rotates each word Left to Right)
        //  Thus, rotate back from Right to Left (LEFT ROTATION)
        //  Left Rotation  
        reverse(word.begin(), word.begin()+n);
        reverse(word.begin()+n, word.end());
        reverse(word.begin(), word.end());

        if (word == temp) count++;
    }

    return count;
}

int main () {
    string str = "llohe ereth";
    int n=5;
    cout<<checkRotation(str, n);
}

/**
 * LOVE LETTER
                            
You write a love letter to your friend. However, before your friend can read it,
someone else takes it and rotates the characters of each word left to right k times.
Find the number of words that remain the same even after this shifting of letters.

Input1: llohe ereth (string of words)
Input2: 2            (k,number of times rotation happens)
Output: 0

Explanation:

    llohe ereth
    lohel rethe (1st rotation) (Right to Left)
    ohell ether (2nd rotation) (Right to Left)
    
   Output: 0 (as no words are same after rotation)
*/


/**
   Left to right
    hello there
    ohell ether (1st rotation) (Left to right)
    lohel rethe (2nd rotation) (Left to right)

    Right to Left
    llohe ereth
    lohel rethe (1st rotation) (Right to Left)
    ohell ether (2nd rotation) (Right to Left)
 * 
*/