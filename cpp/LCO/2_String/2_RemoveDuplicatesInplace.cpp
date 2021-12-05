#include<bits/stdc++.h>
using namespace std;

void RemoveDuplicates_USING_UNORDEREDMAP(char * arr) {
    int len = strlen(arr);  // Length of a Character-String using "strlen"

    // Define a READ_STREAM and WRITE_STREAM
    int read_stream = 0;
    int write_stream = 0;

    unordered_map <char, int> map;  // Unordered_map has Key-Value pair

    while (read_stream < len) {
        if (map[arr[read_stream]] < 1) {
            map[arr[read_stream]]++;
            arr[write_stream] = arr[read_stream];
            write_stream++;
        } else {
            map[arr[read_stream]]++;
        }
        read_stream++;
    }
    arr[write_stream] = '\0';
    cout << "Duplicates Removed - Resultant String is: " << arr << endl;

    for (auto i: map)
        cout << "Key: " << i.first << " Value: " << i.second << endl;
}

void RemoveDuplicates_USING_UNORDEREDSET(char * arr) {
    int len = strlen(arr);  // Length of a Character-String using "strlen"

    // Define a READ_STREAM and WRITE_STREAM
    int read_stream = 0;
    int write_stream = 0;
    
    unordered_set <char> char_set;  // Unordered_set does not have values

    while (read_stream < len) {
        if (char_set.find(arr[read_stream]) == char_set.end()) {
            char_set.insert(arr[read_stream]);
            arr[write_stream] = arr[read_stream];
            write_stream++;
        }
        read_stream++;
    }
    arr[write_stream] = '\0';
    cout << "Duplicates Removed - Resultant String is: " << arr;
}

int main() {
    char ch[] = "BABCDBABC"; // String defined as ARRAY OF CHARACTERS
    // RemoveDuplicates_USING_UNORDEREDSET(ch);
    RemoveDuplicates_USING_UNORDEREDMAP(ch);
    return 0;
}