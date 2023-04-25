package sample;
import java.util.*;

 interface I9
{
 void m1(int n);
 void m2(int n);
}
class I5 implements I9
{
  protected int n,i,bin,n1,sum,sum1;
 public void m1(int n)
  {
    i=1;
   while(n!=0)
   {
    n1=n%2;
    n=n/2;
   bin=bin+(n1*i);
    i=i*10;
   }
   System.out.println("binary="+bin);
   m2(bin);
  }
public void m2(int n)
  {
   for(i=1;n!=0;i++)
   {
    if(i%2==0)
    {
     n1=n%10;
     sum=sum+n1;
     n=n/10;
    }
    else
{
 n1=n%10;
 sum1=sum1+n1;
 n=n/10;
}
   }
   System.out.println("odd place digits sum="+sum1);
 System.out.println("even place digits sum="+sum);
   m3();
   }
   void m3()
   {
    if(sum==sum1)
    {
      System.out.println(" amit no");
    }
    else
{
  System.out.println("not amit no");
}
   }
   }
   class Inter3
{
  public static void main(String[] ar)
  {
    int n;
    System.out.println("enter no=");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   I5 obj=new I5();
   obj.m1(n);
   
  }
}
