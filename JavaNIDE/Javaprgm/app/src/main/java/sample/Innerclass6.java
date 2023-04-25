package sample;
import java.util.*;
 class Innerclass6 
 {
  interface I1
{
  void m1(int n);
  void m2();
}
class B implements I1
{
   public void m1(int n)
  {
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    System.out.println(fact);
  }
 public void m2()
  {
    int n;
   System.out.println("enter no");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();   
   m1(n);
  }
}
public static void main (String[] ar)
{
  Innerclass6.B obj=new Innerclass6().new B();
  obj.m2();
 
  
}
}
