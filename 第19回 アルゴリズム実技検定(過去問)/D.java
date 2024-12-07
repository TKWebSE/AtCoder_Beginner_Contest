import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      // 標準入力を受け取る
      int N = sc.nextInt();
      int T = sc.nextInt();

      // 配列に標準入力を設定する
      int[] TeamAnswerCount = new Int[N];
      int[] TeamAnswerTime = new Int[N];
      for(int i = 0;i < N;i++){
        TeamAnswerCount[i] = sc.nextInt();
        TeamAnswerTime[i] = sc.nextInt();
      }

      // 標準入力と1位の正解問題数と最終正解時刻を計算する
      int KingAnswerCount = 0;
      int KingAnswerTime = 0;
      for(int i = 0;i < N;i++){
        
        // 正解問題数が上回った時
        if(KingAnswerCount < TeamAnswerCount[i]){
          KingAnswerCount = TeamAnswerCount[i];
          KingAnswerTime = TeamAnswerTime[i];
          // 正解問題数が同一で、最終正解時刻が小さい時
        }else if((KingAnswerCount == TeamAnswerCount[i]) && (KingAnswerTime > TeamAnswerTime[i])){ 
          KingAnswerCount = TeamAnswerCount[i];
          KingAnswerTime = TeamAnswerTime[i];
        }
      }
      }

      // 答えを出す
      for(int i = 0;i < N;i++){
        int G = T * (KingAnswerCount - TeamAnswerCount[i]) + (TeamAnswerTime[i] - KingAnswerTime);
        System.out.println(G);
      }
}
