#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  string ans = "";
  int n = 0;
  cin >> n;

  rep(i,n){
    ans+= '-';
  }
  int i = n / 2;
  if(n % 2 == 0){
    i = i - 1;
    ans[i] = '=';
    ans[i+1] = '=';
  }else{
    ans[i] = '=';
  }

  cout << ans << endl;
  return 0;
}
