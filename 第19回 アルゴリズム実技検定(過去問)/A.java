import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      final int N = 3;
      int[] numArray = new int[N];
      for(int i =0;i < N;i++){
        numArray[i] = sc.nextInt();
      } 
      int X = 0;  
      int H = 1;
      int M = 2;

      int answer = 0;
      if(numArray[M] < numArray[X]){
        answer = numArray[X] - numArray[M];     
      }else{
         answer = numArray[X] - numArray[M] + 60;
      }
      System.out.println(answer);
    }
 
}
