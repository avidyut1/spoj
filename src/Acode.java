import java.io.*;
import java.util.*;
import java.math.*;

public class Acode {
    public static void main(String args[]) {
        try {
            InputReader in = new InputReader(System.in);
            BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
            while(true) {
                char inp[] = (in.readLine()).toCharArray();
                if (inp.length == 1 && inp[0] == '0')
                    break;
                int n = inp.length;
                long dp[] = new long[n];
                dp[0] = 1l;
                for (int i = 1; i < n; i++) {
                    if (inp[i] != '0')
                        dp[i] = dp[i - 1];
                    int x = (inp[i - 1] - '0') * 10 + (inp[i]  - '0');
                    if (x <= 26 && x >= 10) {
                        if (i - 2 >= 0)
                            dp[i] += dp[i - 2];
                        else{
                            dp[i] += dp[0];
                        }
                    }
                }
                out.write(Long.toString(dp[n - 1]));
                out.newLine();
            }
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
