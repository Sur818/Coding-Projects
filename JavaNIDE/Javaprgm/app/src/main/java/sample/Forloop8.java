package sample;
import java.util.*;
class Forloop8
{
  public static void main (String[] ar)
  {
   int i,j,n,k=1,prod=1;
   double sum=0;
System.out.print("enter range");
Scanner m=new Scanner(System.in);
 n=m.nextInt();
   for(i=1;i<=n;i++)
   {
     if(i%2!=0)
       {
     System.out.print(k+"^"+k);
     sum=sum+Math.pow(k,k);
     k++;
     }
     else
{
  for(j=1;j<=k;j++)
  {
   prod=prod*j;
  System.out.print(j);
  if(j<k)
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
  System.out.println("sum of seriese="+sum);
}
}

