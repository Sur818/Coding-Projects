package sample;
import java.util.*;
 class Forloop35 
{
  public static void main (String[] ar)
  {
    int i,j,n,fact=1,fact1=1;
    double sum=0,sum1=0;
    System.out.println("enter no of term");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
   for(j=1;j<=i;j++)
   {
     fact=fact*j;
     sum1=sum1+fact;
     System.out.print(j+"!");
     if(j<i)
     {
       System.out.print("+");
     }
   }
   fact1=fact1*i;
   System.out.print("/"+i+"!");
      sum=sum+(sum1/fact1);
      sum1=0;
      fact=1;
      if(i<n)
      {
        System.out.print(" + ");
      }
    }
    System.out.print("sum of seriese="+sum);
    

  }
  
}
