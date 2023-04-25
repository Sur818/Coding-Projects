package sample;
import java.util.*;

 interface Sample4
 {
   void m1();
  
}
interface Sample5 extends Sample4
{
 void m2();
}
class Test3 implements Sample5
{
public void m1()
{
System.out.println("hello");
}
public void m2()
{
System.out.println("bye");
}
}
class Sample3
{
public static void main(String[] ar)
{
  //Test3 obj=new Test3();
 // obj.m1();
 // obj.m2();
  Sample5 obj1=new Test3();
  obj1.m1();
  obj1.m2();
  }
  }
