#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans = 0;
  int n = 0;
  cin >> n;
  vector<int> a(n);

  for(auto& x :a)cin >> x;

  // 分割ロジック
  for(int i = 1;i < n-1;i++){
    map<int,int> before;
    map<int,int> after;

    // beforeCountロジック
    for(int j = 0;j < i;j++){
      if(!(before.count(a.at(j)))){
        before[a.at(j)] = 1;
      }
    }

    // afterCountロジック
    for(int j = i;j < n-1;j++){
      if(!(after.count(a.at(j)))){
        after[a.at(j)] = 1;
      }
    }
    int beforeSize = before.size();
    int afterSize = after.size();
    //最大値を設定する
    ans = max(ans,beforeSize + afterSize);
  }
  
  cout << ans << endl;
  return 0;
}
