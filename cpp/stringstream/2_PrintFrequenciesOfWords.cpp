#include<bits/stdc++.h>
using namespace std;

void printFrequency (string str) {
    stringstream ss(str);
    map<string, int> map1;
    string word;

    while (!ss.eof()) {
        ss>>word;
        map1[word]++;
    }

    map<string, int>::iterator itr;
    for (itr = map1.begin(); itr != map1.end(); itr++) {
        cout<< itr->first << " -> Count: " << itr->second << "\n";
    }
}

int main () {
    string str = "Geeks For Geeks Example";
    printFrequency(str);
}

/**
 * Print frequencies of individual words in a string
Input : Geeks For Geeks Quiz Geeks Quiz Practice Practice
Output : For -> 1
         Geeks -> 3
         Practice -> 2
         Quiz -> 2

Input : Word String Frequency String
Output : Frequency -> 1
         String -> 2
         Word -> 1 
*/