package sample;
import java.util.*;
class Innerclass4
 {
  class A
{
  class B
{
  class C
{
  void m1()
  {
    System.out.println("hello world");
  }
}
}
}
 public static void main (String[] ar)
 {
  Innerclass4.A.B.C obj=new Innerclass4().new A().new B().new C();
  
   obj.m1();
   
   
 }
  
}
