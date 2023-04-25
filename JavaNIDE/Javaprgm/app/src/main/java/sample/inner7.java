package sample;
import java.util.*;

 class  As4
{
  interface Is1
{
 void m1();
}
interface Is2
{
  void m2();
}
class Suraj implements Is1,Is2
{
 public void m1()
  {
    System.out.println("hello world");
  }
 public void m2()
  {
    System.out.println("hello india");
  }
}
  
}
class inner7
{
  public static void main (String[] ar)
  {
    As4.Suraj obj=new As4().new Suraj();
    obj.m1();
    obj.m2();
    
    
  }
}
