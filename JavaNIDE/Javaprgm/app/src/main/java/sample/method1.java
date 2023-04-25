package sample;
import java.util.*;
class Test
{
 void m1()
 {
  System.out.println("dfault method");
 }
 void m1(int a)
{
    System.out.println("1-parameter method"+a);
 }
  
  void m1(int a ,int b)
  {
   System.out.println("2-parameter "+a+"&"+b);
  }
  void m1(int a,int b,int c)
  {
    System.out.println("3-parameter"+a+"&"+b+"&"+c);
    
  }
  }
  class method1
{
  public static void main(String [] arr)
  {
   
 Test obj=new Test();
 obj.m1();
 obj.m1(2,3);
 obj.m1(2,3,4);
  }
}
