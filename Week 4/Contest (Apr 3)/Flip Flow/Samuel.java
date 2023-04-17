
import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

        boolean isglassFlipped = false;
      
        int time = scan.nextInt();
        int bottom = scan.nextInt();
        int top = 0;
        int flips = scan.nextInt();
        int array[]= new int[flips];

      for(int i = 0; i < array.length; i++){
          array[i] = scan.nextInt();
      } 
            int tempIndex = 0;

      
          for(int i = 1; i <= time; i++){
              if(top > 0){
                  top--;
                  bottom++;
              }
            if(tempIndex < array.length && i == array[tempIndex]){
                isglassFlipped = !isglassFlipped;
                tempIndex++;
                int v = top;
                top = bottom;
                bottom = v;
            }
            if(i == time){
                System.out.print(top);
            }
          }    
  }
}
