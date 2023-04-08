import java.util.Scanner;

public class HotHike {
    public static void main(String[] args){
        // read in the input
        Scanner in = new Scanner(System.in);
        int n_days = in.nextInt();
        in.nextLine();
        int[] days = new int[n_days+1];
        for(int i = 1; i < days.length; i++){
            days[i] = in.nextInt();
        }

        // find the maximum
        int start_day = 0, end_day, t = 41, day;
        for(int i = 1; i <= days.length - 3; i++){
            end_day = i + 2;
            if (days[i] < days[end_day]) {
                day = end_day;
            } else {
                day = i;
            }
            if(days[day] < t) {
                t = days[day];
                start_day = i;
            }
        }

        // print the output
        System.out.println(start_day + " " + t);
    }
}
