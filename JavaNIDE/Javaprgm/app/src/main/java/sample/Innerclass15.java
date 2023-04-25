package sample;
import java.util.*;
 class Innerclass15
 {

interface I1
{
void m1();
}
 class A implements I1
  {
  public void m1()
   {
     System.out.println("hello world");
   }
   
  }
 
 

  public static void main(String[] args)
   {
   
  Innerclass15.A obj=new Innerclass15().new A();
    obj.m1();
  }

}
