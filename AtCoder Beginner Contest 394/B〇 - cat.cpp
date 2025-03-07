#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);++i)

int main() {
  int n = 0;
  int outputIndex = 0;
  int minNum = 100100100;
  cin >> n;
  vector<string> S(n);
  // 標準入力を受け取る
  for(auto& s:S) cin >> s;
  
  // 一番小さい数を特定して出力する
  rep(i,n){
    rep(j,S.size()){
      if(minNum > S[j].size()){
        minNum = S[j].size();
        outputIndex = j;
      }
    }
    // 特定した一番小さい文字を出力
    cout << S[outputIndex];
    // その文字を消す
    S.erase(S.begin() + outputIndex);
    minNum = 1001001001;
  }
}
