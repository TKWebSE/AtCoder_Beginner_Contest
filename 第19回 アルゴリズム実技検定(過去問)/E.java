import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int lengthN = sc.nextInt();
      String wordS = sc.next();

      int x = 1;
      int n = 0;
      int i = 0;
      int j = 0;
      for(int loopi = 0;loopi < lengthN;loopi++){
        // 2の条件を満たすnを探す(iを求める)
          n = wordS.indexOf("/*",x);
          // System.out.println(n);
          i = n;
          
        // 4の条件を満たすnを探す(jを求める)
          n = wordS.indexOf("*/",i);
          // System.out.println(n);
          j = n;

        // 6の処理
        if(i == -1 || j == -1 || j - i < 0){
          // System.out.println("loopi:" + loopi);
          if(loopi == 0){
            wordS = "";
          }
          System.out.print(wordS);
          break;
        }else{
          // ここでアウトバウンドが起きている
          // System.out.println("x:" + x);
          // System.out.println("i:" + i);
          // System.out.println("j:" + j);
          // System.out.println("j+2" + j + 2);
          //     System.out.println(wordS);
          wordS = wordS.substring(x,i) + wordS.substring(j+2);
          x = i;
        }
      }
    }
}
