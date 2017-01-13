import java.io.*;
import java.util.*;
import java.math.*;

public class Abcd {
    public static void main(String args[]) {
        try {
            InputReader in = new InputReader(System.in);
            BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
            int n = in.readInt();
            char row[][] = new char[2][2 * n];
            row[0] = in.readLine().toCharArray();
            char col[] = new char[]{'A', 'B', 'C', 'D'};
            for (int i = 0; i < row[0].length - 1; i+=2) {
                Vector<Character> canuse = new Vector<>();
                for (int j = 0; j < 4; j++) {
                    canuse.add(col[j]);
                }
                canuse.remove(new Character(row[0][i]));
                canuse.remove(new Character(row[0][i + 1]));
                row[1][i] = canuse.get(0);
                row[1][i + 1] = canuse.get(1);
                if (i - 1 >= 0) {
                    if (row[1][i] == row[1][i - 1]) {
                        char tmp = row[1][i];
                        row[1][i] = row[1][i + 1];
                        row[1][i + 1] = tmp;
                    }
                }
            }
            out.write(row[1]);
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
