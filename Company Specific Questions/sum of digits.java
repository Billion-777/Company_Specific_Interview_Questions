// To find the sum of the given digits

import java.util.*;
class Main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       long n= sc.nextInt();
        
       long temp,sum=0,sum2=0;
        
        while(n>0)
        {
            temp=n%10;
            sum += temp;
            n=n/10;
        }
         if(sum>=0 && sum <=10)
         {
            System.out.println("Sum of the  given number is "+sum);
         }
         else
         {
             while(sum>10)
             {
                long t=sum%10;
                sum2 += t;
               
                sum /= 10;
                sum2 += sum;
             }
            System.out.println("Sum of the  given number is "+sum2);
             
         }
    }
    
}
    
    
    
    
    
    
    
    
