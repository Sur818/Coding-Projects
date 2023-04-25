package sample;
import java.util.*;
class Forloop38 
{
  public static void main (String[] ar)
  {
    int i,j,n,t=0,k,fact=1,fact1=1;
    double sum=0,sum1=0;
    System.out.print("enter no of term");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
  for(i=1;t<n;i++)
  {
    if(i%2!=0)
    {
      t++;
    for(j=1;j<=i;j++)
    {
      fact1=fact1*j;
      if(j%2!=0)
      {
        System.out.print(j+"!");
      for(k=1;k<=j;k++)
      {
      fact=fact*k;
      }
      sum1=sum1+fact;
      fact=1;
      if(j<i)
      {
        System.out.print("+");
      }
    }
  }
  System.out.print("/"+i+"!");
  if(t<n)
  {
    System.out.print(" + ");
  }
  sum=sum+(sum1/fact1);
  sum1=0;
  }
  }
  System.out.print("sum of seriese ="+sum);
}
}
