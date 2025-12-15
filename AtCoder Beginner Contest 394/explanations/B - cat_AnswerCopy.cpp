#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  sort(s.begin(),s.end(),[&](string a,string b){
    return a.size() < b.size();
  });
  string ans;
  for(string ns : s) ans += ns;
  cout << ans << endl;
  return 0;
}
