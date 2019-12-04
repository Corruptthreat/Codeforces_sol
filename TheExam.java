public class TheExam{
    public static void main(String args[]){
        java.util.Scanner scan = new java.util.Scanner(System.in);
       
        int sum = arr[0]; 
      
        for (int i = 1; i < n; i++)  
        { 
            if (arr[i] == arr[i - 1]) {          
      
                int j = i; 
                while (j < n && arr[j] <= arr[j - 1])  
                {          
                    arr[j] = arr[j] + 1; 
                    j++; 
                } 
            } 
            sum = sum + arr[i]; 
        } 
      
        return sum; 
        }
    }
}