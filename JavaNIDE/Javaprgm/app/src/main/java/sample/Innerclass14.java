package sample;
import java.util.*;
 class Innerclass14
 {
  interface I1
  {
    void m1();
    
  }
  class B implements I1
  {
    public void m1()
    {
      System.out.println("hello");
    }
    
  }
 public static void main(String[] args)
 {
   
  Innerclass14.B obj=new Innerclass14().new B();
  obj.m1(); 
   
  }

}
