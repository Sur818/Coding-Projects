package sample;
import java.util.*;
class Forloop30
 {
   public static void main (String[] ar)
   {
    int i,j,sum=0,fact1=0,fact=1,n;
    System.out.println("enter no of term");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    System.out.print(i+"!");
    sum=sum+fact;
    if(i<n)
    {
      
      System.out.print("+");
    }
    
    }
    System.out.println("sum of seriese ="+sum);
    
   }
  
  
}
