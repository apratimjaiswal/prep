#include<bits/stdc++.h>
using namespace std;

void LongestSubstring (string str, int len) {
    int maxVal = 0, start = 0; //  s is position
    int l = -1; //  l is last_scene

    unordered_map <char, int> map;
    
    for (int end=0; end<len; end++) {
        if (map[str[end]] >= 0) {
            // Update start position
            l = map[str[end]];
            start = max(start, l + 1);
        }
        // Update max always
        map[str[end]] = end;
        maxVal = max(maxVal, (end - start + 1));
    }
    cout << "Length of longest substring: " << maxVal << endl;
    cout << "Longest Substring: " << str.substr(start, maxVal);

}

int main() {
    string str = "ABCDABCEF";
    LongestSubstring(str, str.length());
    return 0;
}