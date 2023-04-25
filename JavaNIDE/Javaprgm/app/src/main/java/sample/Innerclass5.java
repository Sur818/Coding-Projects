package sample;
import java.util.*;
 class Innerclass5 
 {
  class A
{
  int a,b,c;
  void set(int a,int b)
  {
   this.a=a;
   this.b=b; 
    m1(); 
  }
  
private void m1()
 {
   c=a+b;
   System.out.println("sum of no="+c);
  
 } 
  
}
  
public static void main (String[] ar)
{
  
  Innerclass5.A obj=new Innerclass5().new A();
  obj.set(3,5);
  
  
}
}
