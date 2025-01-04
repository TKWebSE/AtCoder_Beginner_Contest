#include <bits/stdc++.h>
using namespace std;

 // 桁を一文字ずつ数値で格納する
vector keta(String &L){
  for(int i=0;i<L.size();i++){
    S.at(i) = (int)(s[i]-'0');
  }
}

void hebiHantei(vactor &keta,int ketasu,int &answer){
  // for(int j = 0;j < ketasu -1;j++){
  //   while(keta.at(0) > keta.at(j)){
  //     answer++;
  //   }
  //   // 最下位桁の数字を0にする
  //   keta.at(j) = 0;
  //   // その次の桁の数字をカウントアップする
  //   // その次の桁の数字と0番目の数字との大小を判定する
  //   // 小さくなければ、次ループへ移行する
  //   keta.at(j+1) 
  //   keta.at(0) = keta.at(0) + 1;
  // }
}

int main() {
  String L = 0;
  int R = 0;

  int answer = 0;
  int ketasu = 0;
  cin >> L >> R;
  vector<int> S (L.size());//文字列の長さでvectorを宣言

  while(L < R){
    // Lを数字から文字列にする
    String LString = L.to_string();
    // 配列を作る
    vector<int> S(LString.size());
    // 配列に文字を入れる
    // 桁の残り数を求める

    // 桁を数字で重み付けして、総和を出す

    // Lの一桁目をカウントアップする
  }
  
  answer = pow((A + B) ,2);
  cout << answer << endl;
}
