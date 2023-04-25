package sample;
import java.util.*;
class Forloop20
 {
   
 public static void main (String[] ar)
 {
 int i,j,n;
 double sum1=0,sum=0;
 System.out.println("enter no of term");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=i;j++)
   {
    System.out.print(j+"^"+j);
    
      sum1=sum1+Math.pow(j,j);
    if(j<i)
    {
      System.out.print("+");
    }
    }
    System.out.print("/"+i);
    if(i<n)
    {
      System.out.print(" + ");
    }
    sum=sum+(sum1/i);
     sum1=0;
 
   
 }
 System.out.print("sum of seriese ="+sum);
  
 }
  
}

