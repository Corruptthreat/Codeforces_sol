public class BeautifulMatrix{
    public static void main(String args[]){
        java.util.Scanner scan = new java.util.Scanner(System.in);
        int arr [][] = new int[5][5];
        int a=0,b=0,counter = 0;
        for(int i = 0;i<5;i++){
            for(int j = 0 ; j<5 ; j++){
            arr[i][j] = scan.nextInt();
            if(arr[i][j]==1){
               a+= i; b+= j;
            }
            }
        }
        for(int i = a;i<5;i++){
            for(int j = b ; j<5; j++){
              counter++;
            if(arr[i][j]==1){
                System.out.print(counter);
                break;
            }
            }
        }
    }
}