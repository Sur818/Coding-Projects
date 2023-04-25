package sample;
import java.util.*;
class Forloop41 
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
    System.out.print(i+"/");
    for(j=1;j<=i;j++)
    {
      System.out.print(j);
      if(j<i)
      {
        System.out.print("+");
      
      }
      sum1=sum1+j;
    }
 sum=sum+i/sum1;
 sum1=0;
 if(i<n)
 {
   System.out.print(" + ");
 }
    
   }
   System.out.print("sum of seriese="+sum); 
 }
  
}

