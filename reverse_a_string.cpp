#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<< "enter string: ";
    cin >> str;
    string str_reverse;
    for (int i = str.size() - 1; i >= 0; --i) {
        str_reverse.push_back(str[i]);
    }
    cout << str_reverse << endl;
    // To check if the given string is palindrome or not.
    if(str == str_reverse) {
        cout << "YES";  
    } else {
        cout << "NO";
    }
    cout << "Version 13";
}