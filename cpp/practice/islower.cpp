#include<bits/stdc++.h>
using namespace std;

char * checkCase_char (char * str) {

    /**
     * THIS IS INCORRECT IMPLEMENTATION
     * 
    */

    char res[] = "A";
    int j=0;
    for (int i=0; i!='\0'; i++) {
        if (isupper(str[i])) {
           res[j++] = tolower(str[i]);
           res[j++] = '_';
        } else {
            res[j++] = str[i];
        }
    }
    return res;
}
string checkCase_str (string str) {
    int j=0; string res;
    for (int i=0; i<str.size(); i++) {
        if (isupper(str[i])) {
           res.push_back(tolower(str[i]));
           res.push_back('_');
        } else {
            res.push_back(str[i]);
        }
    }
    return res;
}
int main () {
    char a[] = "aBc tQsA";
    // cout<< *checkCase_char(a) <<"\n";
    string str = "tHiS is A TeSt sTr";
    cout<<checkCase_str(str);

}