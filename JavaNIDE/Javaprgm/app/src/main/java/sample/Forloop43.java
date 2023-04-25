package sample;
import java.util.*;
class Forloop43
{
 public static void main (String[] ar)
 {
   int i,j,k=1,n;
   double prod=1,sum=0;
   System.out.println("enter no of term");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
    System.out.print(i+"/");
    for(j=1;j<=i;j++)
    {
 System.out.print(k);
      if(j<i)
      {
        System.out.print("*");
      
      }
      prod=prod*k++;
    }
 sum=sum+i/prod;
prod=1;
 if(i<n)
 {
   System.out.print(" + ");
 }
    
   }
   System.out.print("sum of seriese="+sum); 
 }
  
}
