package sample;
import java.util.*;

class For8 
{
 static int i,j,n,k,fact=1,fact1=0,m=0;
 static float sum=0;
 public static void main(String[] ar)
 {
 Scanner t=new Scanner(System.in);
 System.out.println("enter no");
 n=t.nextInt();
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=i;j++)
   {
    System.out.print(j+"!");
    if(j<i)
    {
     System.out.print("+");
    }
    m=m+j*j;
     for(k=1;k<=j;k++)
     {
    fact=fact*k;
    }
    fact1=fact1+fact;
    fact=1;
   }
   sum=sum+(float)fact1/m;
   m=0;
   fact1=0;
   System.out.print("/");
   for(j=1;j<=i;j++)
   {
    System.out.print(j+"*"+j);
    if(j<i)
    {
     System.out.print("+");
    }
   }
   System.out.print(" + ");
 }
 System.out.print("sum of seriese is"+sum);
 }
}


