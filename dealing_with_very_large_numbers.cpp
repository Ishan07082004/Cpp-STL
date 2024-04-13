// when a numer is given that is greater than 10**18 and we have to take it an as input
// we can do it by taking the input as a string.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int last_digit = s[s.size() - 1] - '0';
    // extracting the digit on which we have to perform the operation and substracting
    // it by its ASCII value and we can then store it in integer format......
    cout << last_digit;
}