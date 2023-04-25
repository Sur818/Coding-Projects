package sample;
import java.util.*;
public class Forloop39 
{
 public static void main (String[] ar)
 {
  int i,j,sum=0,n,k,f,fact=1;
  System.out.println("enter no of term");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
    f=0;
   for(j=2;j<=i/2;j++)
   {
     if(i%j==0)
     {
       f=1;
     }
     
   }
   if(f==0)
   {
    for(k=1;k<=i;k++)
    {
     fact=fact*k;
    }
    sum=sum+fact;
    fact=1;
    System.out.print(i+"!");
    if(i<n)
    {
     System.out.print(" + ");
    }
   }
 
    
  }
 System.out.print("sum if seriese="+sum);
 }
   
}
  

