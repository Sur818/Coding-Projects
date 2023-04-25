package sample;
import java.util.*;
class Forloop6 
{
  public static void main (String[] ar)
  {
   int i,j,n,sum=0,prod=1;
System.out.print("enter range");
Scanner m=new Scanner(System.in);
 n=m.nextInt();
   for(i=1;i<=n;i++)
   {
     if(i%2!=0)
       {
     System.out.print(i);
     sum=sum+i;
     }
     else
{
  for(j=1;j<=i;j++)
  {
   prod=prod*j;
  System.out.print(j);
  if(j<i)
  {
    System.out.print("*");
  }
}
sum=sum+prod;
prod=1;
     
   }
   if(i<n)
   {
     System.out.print(" + ");
   }
  }
  
}
}
