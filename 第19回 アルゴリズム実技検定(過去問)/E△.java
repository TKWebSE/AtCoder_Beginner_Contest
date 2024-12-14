import java.util.Scanner;

// 例題は通るが、提出時になぜか弾かれる
public class Main {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int lengthN = sc.nextInt();
      String wordS = sc.next();

      int x = 0;
      int i = 0;
      int j = 0;
      for(int loopi = 0;loopi < lengthN;loopi++){
        // 2の条件を満たすnを探す(iを求める)
          i = wordS.indexOf("/*",x);
          
        // 4の条件を満たすnを探す(jを求める)
          j = wordS.indexOf("*/",i+2);

        // 6の処理
        if(i == -1 || j == -1){
          if(loopi == 0){
            wordS = "";
          }
          System.out.print(wordS);
          break;
        }else{
          wordS = wordS.substring(x,i) + wordS.substring(j+2);
          x = i;
        }
      }
    }
}
