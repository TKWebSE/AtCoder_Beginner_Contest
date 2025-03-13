#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  string s = "";
  string ans = "";
  cin >> s;
  int slength = s.size();

  for(int i = 0;i < slength-1;i++){
    string n = s.at(i) + s.at(i+1);
    if(n == "WA"){
      s.at(i) = "A";
      s.at(i+1) = "C";
      i = 0;
    }
  }

  cout << ans << endl;
}
