
package sample;
import java.util.*;
public class Forloop48 
{
 public static void main (String[] ar)
 {
   int i,j,n,fact=1,prod=1,f;
   double sum=0;
   System.out.println("enter no of term");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
     f=0;
     for(j=2;j<=i/2;j++)
     {
   if(i%j==0)
     {
       f=1;
       break;
       }
       }
       if(f==0)
       {
       System.out.print(i+"!"+"/");
     for(j=1;j<=i;j++)
     {
     fact=fact*j;
     }
     for(j=1;j<=i;j++)
     {
       prod=prod*j;
       System.out.print(j);
       if(j<i)
       {
         System.out.print("*");
       }
       
     }
     sum=sum+fact/prod;
     fact=1;
     prod=1;  
     if(i<n)
     {
       System.out.print(" + ");
     } 
    }
   }
   System.out.print("sum of seriese="+sum);
   
 }
}
