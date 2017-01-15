import java.io.*;
import java.util.*;
import java.math.*;

public class Highways {
    public static void main(String args[]) {
        try {
            InputReader in = new InputReader(System.in);
            BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
            int tc = in.readInt();
            for (int t = 0; t < tc; t++) {
                int n, m, s, e;
                n = in.readInt();
                m = in.readInt();
                s = in.readInt() - 1;
                e = in.readInt() - 1;
                Vector<Edge> g[] = new Vector[n];
                for (int i = 0; i < n; i++) {
                    g[i] = new Vector<>();
                }
                for (int i = 0; i < m; i++) {
                    int u = in.readInt() - 1;
                    int v = in.readInt() - 1;
                    int time = in.readInt();
                    g[u].add(new Edge(u, v, time));
                    g[v].add(new Edge(v, u, time));
                }
                long dist[] = new long[n];
                boolean v[] = new boolean[n];
                Arrays.fill(dist, Long.MAX_VALUE);
                dist[s] = 0;
                PriorityQueue<DistKey> pq = new PriorityQueue<>(1000000, new DistKey());
                pq.add(new DistKey(0, s));
                while(!pq.isEmpty()) {
                    DistKey dk = pq.poll();
                    if (v[dk.k]) {
                        continue;
                    }
                    v[dk.k] = true;
                    for(Edge ed : g[dk.k]) {
                        int vad = ed.to;
                        int edgew = ed.time;
                        if (!v[vad] && dist[vad] > dist[dk.k] + edgew) {
                            dist[vad] = dist[dk.k] + edgew;
                            pq.add(new DistKey(dist[vad], vad));
                        }
                    }
                }
                if (dist[e] == Long.MAX_VALUE) {
                    out.write("NONE");
                    out.newLine();
                    continue;
                }
                out.write(Long.toString(dist[e]));
                out.newLine();
            }
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
class Edge {
    int f, to, time;
    public Edge(int f, int t, int time) {
        this.f = f;
        this.to = t;
        this.time = time;
    }
}
class DistKey implements Comparator<DistKey> {
    public long d; int k;
    public DistKey(){

    }
    public DistKey(long d, int k) {
        this.d = d;
        this.k = k;
    }
    public int compare(DistKey d1, DistKey d2) {
        if (d1.d < d2.d) {
            return -1;
        }
        else
            return 1;
    }
}
