package sample;
import java.util.*;

class For9
 {
   static int i,j,k,fact=1,fact1=1,n;
   static float sum=0,fact2=0;
  public static void main(String[] ar)
 {
    Scanner t=new Scanner(System.in);
    System.out.println("enter no");
    n=t.nextInt();
    for(i=1;i<=n;i++)
    {
      System.out.print(i+"!"+"/");
     for(j=1;j<=i;j++)
     {
     fact=fact*j;
     System.out.print(j+"!");
     if(j<i)
     {
      System.out.print("+");
     }
    for(k=1;k<=j;k++)
   {
    fact1=fact1*k;
   }
   fact2=fact2+fact1;
   fact1=1;
   }
   System.out.print(" + ");
   sum=sum+fact/fact2;
    fact2=0;
    fact=1;
     }
     System.out.print("sum of seriese="+sum);
     }
    }
