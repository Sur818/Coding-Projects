package sample;
import java.util.*;

class For12 
{
  static int i,j,k,fact=0,m=0,b=0;
  static float sum=0;
  public static void main(String[] ar)
{
 int n;
 Scanner t=new Scanner(System.in);
 System.out.println("enter no");
  n=t.nextInt();
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   b=b+j*j;
  System.out.print(j+"^2");
     if(j<i)
      {
       System.out.print("+");
       }
   for(k=1;k<=j;k++)
   {
    fact=fact*k;
   }
   m=m+fact;
   fact=1;
  }
  System.out.print("/");
  for(j=1;j<=i;j++)
  {
   System.out.print(j+"!");
   if(j<i)
   {
   System.out.print("+");
   }
  }
  if(i<n)
  {
  System.out.print(" + ");
  }
  sum=sum+(float)(b/m);
  m=0;
  b=0;     
 }
 System.out.println("\nsum of ser="+sum);
}
  
}
