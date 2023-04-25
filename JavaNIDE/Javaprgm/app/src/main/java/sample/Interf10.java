package sample;

interface I15
 {
  void m1();
}
interface I16
{
  void m2();
}
abstract class Sample11 implements I15,I16
{
  abstract void m3();
  public void m1()
   {
     System.out.println("hello world!");
   }
  public void m2()
   {
     System.out.println("hello btps!");
   }
  }
  class Sample12 extends Sample9
{
  void m3()
  {
   System.out.println("hello india");
  }
}
class Interf10
{
 public static void main(String[] ar)
 {
   Sample12 obj=new Sample12();
   obj.m1();
   obj.m2();
   obj.m3();
   
 }
}


  
