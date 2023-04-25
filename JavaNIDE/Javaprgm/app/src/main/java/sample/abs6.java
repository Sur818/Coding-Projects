package sample;
import java.util.*;

abstract class spy
 {
   protected int i,n,sum,prod=1,n1;
  abstract void m1(int n);
}
class abs6 extends spy
{
 void m1(int n)
 {
   while (n!=0)
   {
    n1=n%10;
    sum=sum+n1;
    prod=prod*n1;
    n=n/10;
   }
   if(sum==prod)
   {
     System.out.println("spy no");
   }
   else
{
  System.out.println("not spy no");
}
  
 }
 public static void main(String[] ar)
 {
   int n;
  Scanner m=new Scanner(System.in);
  abs6 obj=new abs6();
  System.out.println("entee no");
  n=m.nextInt();
  obj.m1(n);
 }
}
