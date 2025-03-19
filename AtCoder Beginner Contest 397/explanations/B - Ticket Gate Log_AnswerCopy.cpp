#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  string s = "";
  cin >> s;
  int ans = 0;
  char target = 'i';
  for(char c:S){
    if(c == target){
      target = target == 'i' ? 'o': 'i';
    }else{
      ++ans;
    }
  }

  if(target == 'o') ++ans;

  cout << ans << endl;
  return 0;
}

