package sample;
import java.util.*;

abstract class abs
 {
  protected int i,j,f,k,fact=1;
  double sum;
  abstract void m1(int n);
}
class Testb extends abs
{
 void m1(int n)
 {
  
  for(i=1;i<=n;i++)
  {
   for(j=2;j<=i/2;j++)
   {
    if(i%j==0)
    {
      f=1;  
    }
    else
    {
     f=0;
    }
    
   }
   if(f==0)
   {
    System.out.print(i+"/"+i+"!"+" + ");
   
   for(k=1;k<=i;k++)
   {
    fact=fact*k;
   }
   sum=sum+(double)i/fact;
   fact=1;
   }
  }
  System.out.println("sum of seriese="+sum);
 }
}
class abs14
{
  public static void main(String[] ar)
  {
    int n;
   Scanner m=new Scanner(System.in);
   System.out.println("enter no");
   n=m.nextInt();
   Testb obj=new Testb();
   obj.m1(n);
  }
}
