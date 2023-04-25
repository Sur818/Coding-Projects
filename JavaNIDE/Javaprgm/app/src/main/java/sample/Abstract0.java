package sample;
import java.util.*;

abstract class One
{
  protected int c,n,i;
  abstract void m1();
  void m2(int a,int b)
  {
   c=a+b;
   System.out.println("sum of given no in abstract class"+c);
   
  }
 
}
class Twoo extends One
{
void setdata(int x)
{
  n=x;
  m1();
  m3();
 
}
void m1()
{
for(i=1;i<=n;i++)
{
System.out.println("hello");
}
}
 void m3()
{
for(i=1;i<=n;i++)
{
  System.out.println("world"); 
} 
}
}
class Abstract0
{
  public static void main(String[] ar)
  {
   Twoo obj=new Twoo();
   obj.setdata(5);
   obj.m2(2,3);
  }
}
