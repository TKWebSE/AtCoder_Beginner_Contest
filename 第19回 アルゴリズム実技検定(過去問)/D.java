import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      // 標準入力を受け取る
      int N = sc.nextInt();
      int T = sc.nextInt();

      int[] teamAnswerCount = new Int[N];
      int[] teamAnswerTime = new Int[N];
      for(int i = 0;i < N;i++){
        TeamAnswerCount[i] = sc.nextInt();
        TeamAnswerTime[i] = sc.nextInt();
      }

      // 標準入力と1位の正解問題数と最終正解時刻を計算する
      int 1stAnswerCount = 0;
      int 1stAnswerTime = 0;
      for(int i = 0;i < N;i++){
        
        if(1stAnswerCount < TeamAnswerCount){
          if(1stAnswerCount = TeamAnswerCount[i] && 1stAnswerTime > TeamAnswerTime){
            1stAnswerCount = TeamAnswerCount[i];
            1stAnswerTime = TeamAnswerTime[i];
          }
        }
        }
      }

      // 答えを出す
      for(int i = 0;i < N;i++){
        int G = T * (1stAnswerCount - TeamAnswerCount[i]) + (TeamAnswerTime - 1stAnswerTime);
        System.out.println(G);
      }
}
