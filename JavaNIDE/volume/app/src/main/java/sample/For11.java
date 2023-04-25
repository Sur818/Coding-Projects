package sample;
import java.util.*;

class For11 
{
static int i,j,k,fact=1;
static float sum=0,fact1=0;
public static void main(String[] ar)
{
 int n;
 System.out.println("enter no");
 Scanner m=new Scanner (System.in);
 n=m.nextInt();
 for(i=1;i<=n;i++)
 {
   System.out.print(i+"*"+i+"/");
 for(j=1;j<=i;j++)
 {
   System.out.print(j+"!");
   if(j<i)
   {
   System.out.print("+");
   }
  for(k=1;k<=j;k++)
  {
   fact=fact*k;
  }
  fact1=fact1+fact;
  fact=1;
 }
 System.out.print(" + ");
 sum=sum+(float)i*i/fact1;
 fact1=0;
 }
 System.out.println("sum of seriese"+sum);
}
}
