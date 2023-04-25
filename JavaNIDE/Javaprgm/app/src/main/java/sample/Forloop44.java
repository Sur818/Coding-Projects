package sample;
import java.util.*;
class Forloop44
{
 public static void main (String[] ar)
 {
   int i,j,n;
   double sum1=0,sum=0,p;
   System.out.println("enter no of term");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
    System.out.print(i+"^"+i+"/");
    p=Math.pow(i,i);
    for(j=1;j<=i;j++)
    {
      System.out.print(j+"^"+j);
      if(j<i)
      {
        System.out.print("+");
      
      }
      sum1=sum1+Math.pow(j,j);
    }
 sum=sum+p/sum1;
 sum1=0;
 if(i<n)
 {
   System.out.print(" + ");
 }
    
   }
   System.out.print("sum of seriese="+sum); 
 }
  
}

