#include<bits/stdc++.h>
using namespace std;
int main() {
    int a = 4;
    int *ptr_a = &a;
    cout << "Adress of a: " << &a << endl;
    cout << "Value of ptr_a: " << ptr_a << endl;
    cout << "Value of *ptr_a: " << *ptr_a << endl;
    *ptr_a = 5;
    cout << "a:" << a << endl;
    cout << "ptr_a + 1: " << ptr_a + 1 << endl;
}