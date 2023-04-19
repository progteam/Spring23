import java.util.Scanner;

public class FlipFlow {
    public static void main(String[] args){
        // read in the input
        Scanner in = new Scanner(System.in);
        int t, s, n;
        String[] input = in.nextLine().split(" ");
        t = Integer.parseInt(input[0]);
        s = Integer.parseInt(input[1]);
        n = Integer.parseInt(input[2]);
        int[] times = new int[n+1];
        for(int i = 0; i < n; i++){
            times[i] = in.nextInt();
        }
        times[n] = t;

        // find the top
        int top = 0;
        for(int i = 0; i < n; i++){
            top = (s - top) - (times[i+1] - times[i]);
            if(top <= 0){
                top = 0;
            }
        }
        System.out.println(top);
    }
}
