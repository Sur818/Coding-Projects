package sample;
import java.util.*;
 class Innerclass3 
 {
   
 abstract class A
{ 
abstract void m1();
abstract void m2();
void m3()
{
  System.out.println("hello");
}
}

class B extends A
{
  public void m1()
  {
    System.out.println("world");
  }
 public void m2()
  {
    System.out.println("suraj");
  }
  
}
 public static void main(String[] ar)
 {
   Innerclass3.B obj=new Innerclass3().new B();
   obj.m1();
   obj.m2();
   obj.m3();

   
   
 }  
  
}
