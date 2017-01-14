import java.io.*;
import java.util.*;
import java.math.*;

public class Abcdef {
    public static void main(String args[]) {
        try {
            InputReader in = new InputReader(System.in);
            BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
            int n = in.readInt();
            int ar[] = new int[n];
            for (int i = 0; i < n; i++) {
                ar[i] = in.readInt();
            }
            Vector<Integer> res = new Vector<>();
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        int val = ar[i] * ar[j] + ar[k];
                        res.add(val);
                    }
                }
            }
            Vector<Integer> res2 = new Vector<>();
            int ans = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        if (ar[k] == 0)
                            continue;
                        int val = (ar[i] + ar[j]) * ar[k];
                        res2.add(val);
                    }
                }
            }
            Collections.sort(res);
            Collections.sort(res2);
            Integer r1[] = new Integer[res.size()];
            Integer r2[] = new Integer[res2.size()];
            for (int i = 0; i < r1.length; i++) {
                r1[i] = new Integer(res.get(i));
            }
            for (int i = 0; i < r2.length; i++) {
                r2[i] = new Integer(res2.get(i));
            }
            for (int i = 0; i < r1.length; i++) {
                int low = lower_bound(r2, r1[i]);
                int high = upper_bound(r2, r1[i]);
                ans += high - low;
            }
            out.write(Integer.toString(ans));
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    public static int lower_bound(Comparable[] arr, Comparable key) {
        int len = arr.length;
        int lo = 0;
        int hi = len-1;
        int mid = (lo + hi)/2;
        while (true) {
            int cmp = arr[mid].compareTo(key);
            if (cmp == 0 || cmp > 0) {
                hi = mid-1;
                if (hi < lo)
                    return mid;
            } else {
                lo = mid+1;
                if (hi < lo)
                    return mid<=len-1?mid+1:-1;
            }
            mid = (lo + hi)/2;
        }
    }

    public static int upper_bound(Comparable[] arr, Comparable key) {
        int len = arr.length;
        int lo = 0;
        int hi = len-1;
        int mid = (lo + hi)/2;
        while (true) {
            int cmp = arr[mid].compareTo(key);
            if (cmp == 0 || cmp < 0) {
                lo = mid+1;
                if (hi < lo)
                    return mid<=len-1?mid+1:-1;
            } else {
                hi = mid-1;
                if (hi < lo)
                    return mid;
            }
            mid = (lo + hi)/2;
        }
    }
}
