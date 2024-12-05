import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            
            // 宣言と標準入力
            int InputMoney = 0;
            int OutputMoney = 0;
            int N = sc.nextInt();
            int[] TranArray = new int[N];
            for(int i = 0;i < N; i++){
              TranArray[i] = sc.nextInt();
            }

            // 入出金計算ロジック
            for(int i = 0;i+1 < N; i++){
              if(TranArray[i] < TranArray[i+1]){
                InputMoney = InputMoney + TranArray[i+1] - TranArray[i];
              }else{
                OutputMoney = OutputMoney + TranArray[i] - TranArray[i+1];
              }
            }

            // 答え出力
            System.out.print(InputMoney);
            System.out.print(" ");
            System.out.print(OutputMoney);
    }
}
