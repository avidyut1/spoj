import java.io.*;
import java.util.*;
import java.math.*;

public class Main113 {
    public static long ans[] = new long[10];
    public static void main(String args[]) {
        try {
            InputReader in = new InputReader(System.in);
            BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
            go("");
            System.out.println(Arrays.toString(ans));
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    public static void go(String s) {
        if (s.length() == 10) {
            return;
        }
        if (valid(s)) {
            ans[s.length()]++;
        }
        go(s + 'X');
        go(s + 'Y');
        go(s + 'Z');
    }
    public static boolean valid(String s) {
        int ind = s.indexOf("XYZ");
        int ind2 = s.indexOf("XZY");
        int ind3 = s.indexOf("YZX");
        int ind4 = s.indexOf("YXZ");
        int ind5 = s.indexOf("ZXY");
        int ind6 = s.indexOf("ZYZ");
        if (ind >= 0 || ind2 >= 0 || ind3 >= 0 || ind4 >= 0 || ind5 >= 0 || ind6 >= 0) {
            return false;
        }
        return true;
    }
}
