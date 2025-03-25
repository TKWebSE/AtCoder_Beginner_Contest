#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans = -1;
  int n = 0;
  cin >> n;
  map<int,pair<int,int>>  nums;
  // オンリーワンの数字を持つ人だけの配列を作る
  rep(i,n){
    int num;
    cin >> num;
    // 持っている人の番号も記録する
    if(nums.count(num) == 0){
      // key=持ってる数字 、value.first=登場人物の順番、value.second=番号の登場回数
      nums[num].first = i+1;
      nums[num].second = 1;
    }else{
      nums[num].second++;
    }
  }

  // maxを求める
  for(const auto&  [key, value] :nums){
    if(value.second == 1){
      ans = max(ans,key);
    }
  }
  if(ans != -1){
    ans = nums[ans].first;
  }
  cout << ans << endl;
  return 0;
}
