package sample;
import java.util.*;
class Forloop21
 {
   
 public static void main (String[] ar)
 {
 int i,j,n;
 double sum1=0,sum=0,z;
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
    System.out.print("/"+i+"^"+i);
    if(i<n)
    {
      System.out.print(" + ");
    }
    z=Math.pow(i,i);
    sum=sum+(sum1/z);
     sum1=0;
 
   
 }
 System.out.print("sum of seriese ="+sum);
  
 }
  
}


