#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans;
  int x = 0;
  cin >> x;

  if(x >= 38){
    ans = 1;
  }else if(x >= 37.5){
    ans = 2;
  }else {
    ans = 3;
  }

  cout << ans << endl;
  return 0;
}
