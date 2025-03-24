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
      // 3つ目のやつがこっちに入ってしまう
      nums[num] = 1;
    }else{
      nums[num]++;
    }
  }

  // maxを求める
  for(const auto&  [key, value] :nums){
    if(value == 1){
      ans = max(ans,key);
    }
  }

  cout << ans << endl;
  return 0;
}
