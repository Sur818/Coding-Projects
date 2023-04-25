
package sample;
import java.util.*;
class Forloop23
 {
   
 public static void main (String[] ar)
 {
 int i,j,n,z,prod=1;
 double sum=0, sum1=0;
 System.out.println("enter no of term");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 for(i=1;i<=n;i++)
 {
   
   for(j=1;j<=i;j++)
   {
    System.out.print(j);
   sum1=sum1+j;
    if(j<i)
    {
      System.out.print("+");
    }
    }
    
     System.out.print("/");

    for(j=1;j<=i;j++)
    {
     System.out.print(j);
     if(j<i)
     {
      System.out.print("*");
     }
     prod=prod*j;
     
    }
    
    if(i<n)
    {
      System.out.print(" + ");
    }
    sum=sum+(sum1/prod);
     sum1=0;
     prod=1;
   
 }
 System.out.print("sum of seriese ="+sum);
  
 }
  
}


