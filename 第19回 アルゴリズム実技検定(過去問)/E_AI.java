public class RemoveComments {
    public static String removeComments(String s) {
        StringBuilder result = new StringBuilder(); // 結果を格納するためのStringBuilderを作成
        int length = s.length(); // 文字列の長さを取得
        int i = 0; // インデックスを初期化

        while (i < length) {
            // コメントの開始 "/*" を検出
            if (i < length - 1 && s.charAt(i) == '/' && s.charAt(i + 1) == '*') {
                i += 2; // コメントの開始をスキップ
                // コメントの終わり "*/" を見つけるまでループ
                while (i < length - 1 && !(s.charAt(i) == '*' && s.charAt(i + 1) == '/')) {
                    i++;
                }
                // コメントの終わりをスキップ
                if (i < length - 1) {
                    i += 2;
                } else {
                    break; // コメントの終わりが見つからない場合、ループを終了
                }
            } else {
                // コメント外の文字を結果に追加
                result.append(s.charAt(i));
                i++;
            }
        }

        // 残りの文字を追加
        while (i < length) {
            result.append(s.charAt(i));
            i++;
        }

        return result.toString(); // 最終的な結果を返す
    }

    public static void main(String[] args) {
        String S = "a/*b*/c"; // 入力文字列
        System.out.println("Resulting string: " + removeComments(S)); // コメントを除去した結果を出力
    }
}
