#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  string ans = "No";
  vector<int> num(13);
  rep(i,7) {
    int c;
    cin >> c;
    num[c-1]++;
  }

  bool threeNum = false;
  bool twoNum = false;
  rep(i,13){
    if(num[i] >= 3){
      threeNum = true;
      num[i] = 0;
      // cout << "threeNum" << i << endl;
      break;
    } 
  }
  rep(i,13){
    if(num[i] >= 2) {
      twoNum = true;
      // cout << "twoNum" << i << endl;
      // cout << "twoTF" << twoNum << endl;
    }
  }

// cout << threeNum << ":"<< twoNum <<endl;
   if(threeNum && twoNum) ans = "Yes";
  cout << ans << endl;
  return 0;
}
