package sample;
import java.util.*;
class Forloop11
 {
 public static void main (String[] ar)
 {
  int sum=0,i,n,k=1,j,prod=1;
  System.out.println("enter range");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=3;j++)
    {
      System.out.print(k);
    prod=prod*k++;
    
    if(j<3)
    {
      System.out.print("*");
    }
    }
   sum=sum+prod;
   prod=1;
    if(i<n)
    {
      System.out.print(" + ");
    }
   
  }
  System.out.println("sum of seriese ="+sum);
 }
}
