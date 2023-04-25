package sample;
import java.util.*;
public class Forloop46 
{
 public static void main (String[] ar)
 {
   int i,j,n,k=0,fact=1,prod=1;
   double sum=0;
   System.out.println("enter no of term");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   for(i=1;k<n;i++)
   {
     if(i%2!=0)
     {
       k++;
       System.out.print(i+"!"+"/");
     for(j=1;j<=i;j++)
     {
     fact=fact*j;
     }
     for(j=1;j<=k;j++)
     {
       prod=prod*j;
       System.out.print(j);
       if(j<k)
       {
         System.out.print("*");
       }
       
     }
     sum=sum+fact/prod;
     fact=1;
     prod=1;  
     if(k<n)
     {
       System.out.print(" + ");
     } 
    }
   }
   System.out.print("sum of seriese="+sum);
   
 }
}
