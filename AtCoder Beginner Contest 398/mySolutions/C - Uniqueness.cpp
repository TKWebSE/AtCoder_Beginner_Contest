#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans = -1;
  int n = 0;
  cin >> n;
  map<int,int> nums;
  // オンリーワンの数字を持つ人だけの配列を作る
  rep(i,n){
    int num;
    cin >> num;
    if(nums.count(num) == 0){
      nums[num] = num;
    }else{
      nums.erase(num);
    }
  }

  // maxを求める
  for(const auto&  [key, value] :nums){
    ans = max(ans,value);
  }

  cout << ans << endl;
  return 0;
}
