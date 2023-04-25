package sample;
import java.util.*;

interface I10
 {
   void m1();
  
}
interface I11
{
  void m2();
}
interface I12 extends I10,I11
{
  void m3();
}
class Sample6 
{
  int n=6;
  void m4()
  {
    System.out.println("hello india"+n);
  }
  
}
class Sample7 extends  Sample6 implements I12
{
  
 public void m1()
  {
    System.out.println("hello world");
    
  }
 public void m2()
  {
    System.out.println("hello btps");
  }
 public void m3()
  {
    System.out.println("hello!");
  }
  
}
class Interf8
{
  public static void main(String[] ar)
  {
    Sample7 obj = new Sample7();
    obj.m4();
    obj.m1();
    obj.m2();
    obj.m3();
    //I12 obj1= new Sample7();
  // obj1.m1();
   // obj1.m2();
  // obj1.m3();
  //obj1.m4();  //invalid
   
   
  }
}
