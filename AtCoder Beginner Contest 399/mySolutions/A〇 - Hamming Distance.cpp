#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans = 0;
  int n = 0;
  string s,t = "";
  cin >> n >> s >> t;

  rep(i,n){
    if(s[i] != t[i]){
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
