#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans = 0;
  map<int,int> left;
  map<int,int> right;
  int n = 0;
  cin >> n;
  vector<int> a(n);
  for(auto& x : a) cin >> x;
  
  // rightに数字の出現回数と数字を全て記録する
  rep(i,n){
    if(right[a[i]].count == 0){
      right[a[i]] = 1;
    }else{
      right[a[i]]++;
    }
  }

  // iを一文字ずつずらして右から左に数字を移動させて、maxを更新する
  rep(i,n){
    
  }
  

  cout << ans << endl;
  return 0;
}
