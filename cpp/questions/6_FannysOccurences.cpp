#include<bits/stdc++.h>
using namespace std;

char* removeChar_UsingCharString (char* arr, char c) {
    int len = strlen(arr);
    int j=0;

    for (int i=0; i<len; i++) {
        if (arr[i] != c) {
            arr[j++] = arr[i];
        }
    }
    arr[j] = '\0';
    return arr;
}

int main () {
    char str[] = "Welcome to Mettl";
    cout<<removeChar_UsingCharString(str, 'l');

    //string str = "Welcome to Mettl";
    //removeChar(str, 'e');
}

/*void removeChar_UsingStrings (string str, char a) {
    int j=0;
    for (int i=0; i<str.length(); i++) {
        if (str[i] != a) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    cout<<str;
}*/