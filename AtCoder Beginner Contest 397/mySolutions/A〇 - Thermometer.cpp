#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int ans;
  double x = 0;
  cin >> x;

  if(x >= 38){
    ans = 1;
  }
  if(x >= 37.5 && x < 38){
    ans = 2;
  }
  if(x < 37.5){
    ans = 3;
  }
  
  cout << ans << endl;
  return 0;
}
