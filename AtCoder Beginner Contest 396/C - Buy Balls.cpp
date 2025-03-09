#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans = 0;
  int nowPrice = 0;
  int blackIndex,whiteIndex=0;
  int blackMax,whiteMax =0;
  int n,m;
  cin >> n >> m;
  vector<int> black(n);
  vector<int> white(m);

  for(auto& b:black) cin >> b;
  for(auto& w:white) cin >> w;

  // 降順ソート
  sort(black.rbegin(), black.rend());
  sort(white.rbegin(), white.rend());
  
  // 黒の最大値とIndexを求める
  rep(i,n){
    blackMax+= black[i];
    if(blackMax <= nowPrice){
      blackMax = nowPrice;
      blackIndex =i;
    }else{
      break;
    }
  }
  nowPrice = 0;
  // 白の最大値とIndexを求める
  rep(i,n){
    whiteMax+= white[i];
    if(whiteMax <= nowPrice){
      whiteMax = nowPrice;
      whiteIndex =i;
    }else{
      break;
    }
  }

  if(blackIndex < whiteIndex){
    ans = blackMax + whiteMax;
  }else{
    ans = whiteMax;
    rep(i,blackIndex){
      ans+= black[i];
    }
  }
  cout << ans << endl;
  return 0;
}
