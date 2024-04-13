// Palindromic String question from Hackerearth
// Revise and improvise this code.

/*
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string a,b;
	cin>>a;
	int n=a.size();
	int i=0;
	while(i!=n/2){
		if(a[i]!=a[n-i-1]){
			break;
		}
		i++;
	}
	if(i==n/2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
*/

// Remove Character Question from GeeksforGeeks

#include<bits/stdc++.h>
using namespace std;
string solve(string str1, string str2) {
    string ans;
    for (int i = 0; i < str1.length(); i++) {
        int flag = 0;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                flag = 1;
            }
        }
        if (flag != 1) {
            ans.push_back(str1[i]);
        }
    }
    return ans;
}
int main() {
    string str1 = "abcdef";
    string str2 = "cefz";
    cout << "Final String is: ";
    cout << solve(str1, str2) << endl;
    return 0;
}