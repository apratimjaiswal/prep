#include<bits/stdc++.h>
using namespace std;

vector<int> PascalTriangle(int row) {
    if (row == 1) {
        vector<int> v = {1};
        return v;
    }

    vector<int> currRow;

    currRow.push_back(1);

    vector<int> prevLine = PascalTriangle(row-1);
    for (auto i = 1; i < prevLine.size(); i++) {
        currRow.push_back(prevLine[i-1] + prevLine[i]);
    }
    
    currRow.push_back(1);

    return currRow;
}

int main() {
    int row = 4;
    vector<int> ptr = PascalTriangle(row);
    for (auto i = 0; i<ptr.size(); i++) { cout << ptr[i] << " "; }
    cout << endl;
    // for (auto i = ptr.begin(); i != ptr.end(); i++) { cout << *i << " " ; }
}