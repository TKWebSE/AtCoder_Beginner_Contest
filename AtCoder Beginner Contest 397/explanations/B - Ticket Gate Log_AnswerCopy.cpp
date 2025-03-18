#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  string s = "";
  cin >> s;
  int ans = 0;
  char expect = 'i';
  for(char c :s){
    if(c != expect) ans++;
  }


  cout << ans << endl;
  return 0;
}

