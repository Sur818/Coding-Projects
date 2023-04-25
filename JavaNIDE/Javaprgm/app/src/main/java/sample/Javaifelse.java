package sample;
import java.util.*;
import java.util.Scanner;

 class Javaifelse
 {
   public static void main(String[] ar)
   {
     int n,i,sum=0,sum1=0,n1;
    Scanner m=new Scanner(System.in);
    System.out.println("enter no");
    n=m.nextInt();
    for(i=1;n!=0;i++)
    {
      n1=n%10;
     if(i<=2)
     {
      sum=sum+n1;
      n=n/10;
      }
      else
    {
     sum1=sum1+n1;
     n=n/10;
     
     }
     }
     if(sum==sum1)
     {
      System.out.println("lucky no");
      }
      else 
      {
       System.out.println("not lucky no");
      }
     }
      
     
    }
    
  
