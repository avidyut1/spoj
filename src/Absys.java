import java.io.*;
import java.util.*;
import java.math.*;

public class Absys {
    public static void main(String args[]) {
        try {
            InputReader in = new InputReader(System.in);
            BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
            int tc = in.readInt();
            for (int t = 0; t < tc; t++) {
                String s = in.readLine();
                s = s.replace("+", "alpha");
                s = s.replace("=", "alpha");
                String res[] = s.split("alpha");
                for (int i = 0; i < res.length; i++) {
                    res[i] = res[i].trim();
                }
                if (res[0].contains("machula")) {
                    int f = Integer.parseInt(res[2]) - Integer.parseInt(res[1]);
                    out.write(Integer.toString(f));
                    out.write(" + ");
                    out.write(res[1]+" = ");
                    out.write(res[2]);
                }
                else if (res[1].contains("machula")) {
                    int sec = Integer.parseInt(res[2]) - Integer.parseInt(res[0]);
                    out.write(res[0] + " + ");
                    out.write(Integer.toString(sec));
                    out.write(" = ");
                    out.write(res[2]);
                }
                else {
                    int third = Integer.parseInt(res[0]) + Integer.parseInt(res[1]);
                    out.write(res[0] + " + ");
                    out.write(res[1] + " = ");
                    out.write(Integer.toString(third));
                }
                out.newLine();
            }
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
