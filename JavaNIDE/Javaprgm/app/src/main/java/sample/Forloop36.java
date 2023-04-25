package sample;
import java.util.*;
 class Forloop36 
{
  public static void main (String[] ar)
  {
    int i,j,n,k=0,fact=1,fact1=1;
    double sum=0,sum1=0;
    System.out.println("enter no of term");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    for(i=1;k<n;i++)
    {
     if(i%2!=0)
     { 
       k++;
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
   for(j=1;j<=i;j++)
   {
   fact1=fact1*j;
   }
   System.out.print("/"+i+"!");
      sum=sum+(sum1/fact1);
      sum1=0;
      fact=1;
      fact1=1;
      if(k<n)
      {
        System.out.print(" + ");
      }
      }
    }
    System.out.print("sum of seriese="+sum);
    

  }
  
}

