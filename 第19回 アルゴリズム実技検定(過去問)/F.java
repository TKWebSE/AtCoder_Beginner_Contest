import java.util.Scanner;
import java.util.HashMap;

public class Main {
    public static String DominoFallDown(Scanner sc) {
      int N = sc.nextInt();
      String X = sc.next();
      String Y = sc.next();
      HashMap<String,String> dominoMap = new HashMap<>();
      
      // 情報を格納する
      for(int i = 0;i < N;i++){
        dominoMap.put(sc.next(),sc.next());
      }

      // 判定する
      String key = X;
      String value = "";
      for(int i = 0;i < N;i++){
        value = dominoMap.get(key);
        if(value == null){
          break;
        }
        if(value.equals(Y)){
          return "Yes";
        }
        key = value;
      }

      // 見つからなかったとき
        return "No";
      }
    

    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print(DominoFallDown(sc));
    }
}
