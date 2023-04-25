package sample;
import java.util.*;
 class Forloop34
 {
  public static void main (String[] ar)
  {
  int i ,sum=0,prod=1,n,fact=1,sum1=0,k;
  System.out.println("enter no of term");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
       if(i%2==0)
       {
         for(k=1;k<=i;k++)
         {
           fact=fact*k;
         prod=prod*fact;
       System.out.print(k+"!");
       if(k<i)
       {
       System.out.print("*");
       }
       }
       sum=sum+prod;
       prod=1;
       fact=1;
       }
       
       else
{
  for(k=1;k<=i;k++)
  {
 fact=fact*k;
}
sum1=sum1+fact;
sum=sum+sum1;
sum1=0;
fact=1;
System.out.print(i+"!");
}
if(i<n)
{
  System.out.print(" + ");
}       
}
  System.out.println("\nsum of seriese="+sum);
 
  }
}
