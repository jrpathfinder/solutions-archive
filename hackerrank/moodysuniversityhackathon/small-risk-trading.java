import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.lang.reflect.Array;
import java.util.*;

public class Main implements Runnable {

    void solve() throws IOException {
        int n = nextInt();
        int k = nextInt();
        double[] a = new double[n];
        double[] x = new double[n];
        double[] y = new double[n];
        double[] p = new double[n];
        for (int i = 0; i < n; i++) {
            p[i] = nextDouble();
        }
        for (int i = 0; i < n; i++) {
            x[i] = nextDouble();
        }
        for (int i = 0; i < n; i++) {
            y[i] = nextDouble();
        }
        for (int i = 0; i < n; i++) {
            a[i] = x[i] * p[i] - (1 - p[i]) * y[i];
        }
        Arrays.sort(a);
        double res = 0;
        int pos = n - 1;
        while (k > 0 && a[pos] > 0) {
            k--;
            res += a[pos--];
        }
        out.printf("%.2f", res);


    }

    BufferedReader br;
    StringTokenizer st;
    PrintWriter out;

    public void run() {
        try {
            br = new BufferedReader(new InputStreamReader(System.in));
            out = new PrintWriter(System.out);

            solve();
            br.close();
            out.flush();
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
            System.exit(123);
        }
    }

    String next() throws IOException {
        while (st == null || !st.hasMoreTokens()) {
            String s = br.readLine();
            if (s == null)
                return null;
            st = new StringTokenizer(s);
        }
        return st.nextToken();
    }

    double nextDouble() throws IOException {
        return Double.parseDouble(next());
    }

    int nextInt() throws IOException {
        return Integer.parseInt(next());
    }

    long nextLong() throws IOException {
        return Long.parseLong(next());
    }

    public static void main(String[] args) {
        new Thread(new Main()).start();
    }
}
