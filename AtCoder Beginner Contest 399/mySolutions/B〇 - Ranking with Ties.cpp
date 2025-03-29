#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int n = 0;
  cin >> n;
  vector<int> p(n);
  vector<int> ans(n);
  for(auto& x : p) cin >> x;

  int x = 0;
  int k = 0;
  int r = 1;
  while(r < n+1){
    // 最大値を求める
    for(int i = 0;i < n;i++){
      x = max(x,p[i]);
    }
    // 順位確定
    for(int i = 0;i < n;i++){
      if(p[i] == x){
        ans[i] = r;
        p[i] = 0;
        k++;
      }
    }
    r+= k;
    k = 0;
    x = 0;
  }

  for(auto& x:ans) cout << x << endl;
  return 0;
}
