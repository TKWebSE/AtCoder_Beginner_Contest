#include <bits/stdc++.h>
using namespace std;

int main() {
  string ans = "Yes";
  int n = 0;
  int a = 0;
  int b = 0;
  cin >> n >> a;
  
  for(int i = 0;i < n-1;i++){
    cin >> b;
    if(a < b){
      a = b;
    }else{
      ans = "No";
      break;
    }
  }

  cout << ans << endl;
}
