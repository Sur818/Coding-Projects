package sample;
import java.util.*;

class  For1 
{
 static int i,j,sum=0;
 
 public static void main(String[] ar)
 {
   int n,fact=1;
   System.out.println("enter no");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
  for(i=1;i<=n;i++)
  {
   System.out.print(i+"!");
   if(i<n)
   {
     System.out.print("+");
   }

   for(j=1;j<=i;j++)
   {
   fact=fact*j;
}
sum=sum+fact;
fact=1;
  }
  
  System.out.print("\nsum of seriese="+sum);
 }
}
