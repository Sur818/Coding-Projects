package sample;
import java.util.*;
 interface I6
 {
   void m1();
}

interface I7 
{
  void m2();
}

class Test4
{
  void m3()
  {
    System.out.println("hello world");
  }

}
class Test5 extends Test4 implements I6,I7
{
  public void m1()
  {
    System.out.println("hello world");
  }
  public void m2()
  {
    System.out.println("btps");
    }
  }
  class Interf7
{
  public static void main (String[] ar)
  {
    Test5 obj=new Test5();
    
    obj.m1();
    obj.m2();
    obj.m3();
    
  }
}
