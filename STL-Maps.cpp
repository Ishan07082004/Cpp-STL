#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
  cout << m.size() << endl;
  for (auto &pr : m){
    cout << pr.first << " " << pr.second << endl;
  }
}

int main() {
  map<int, string> m;
  m[1] = "abc";
  m[5] = "cdc";
  m[3] = "acd";
  m[4] = "dfe";
  m.insert({7, "ive"});
  auto it = m.find(3);
  if (it != m.end()){
    m.erase(it);
  }
  // if (it == m.end()) {
  //   cout << "No Value";
  // } else {
  //   cout << (*it).first << " " << (*it).second << endl;
  // }
  print(m); // -> this gives us the final answer.

  // map<int, string> :: iterator it;

  // Tough Shit
  // for(it = m.begin(); it != m.end(); ++it){
  //   cout << it->first << " " << it->second << endl;
  // }

  // Easy Shit
  // for(auto &pr : m){
  //   cout << pr.first << " " << pr.second << endl;
  // }
}