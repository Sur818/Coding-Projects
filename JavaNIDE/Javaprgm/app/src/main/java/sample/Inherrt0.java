package sample;

 class A
 {
   void m1()
   {
    System.out.println("m1-A method calling");
   }
  
}
class B extends A
{
 void m2()
 {
   System.out.println("m2-B method calling");
 }
 
}
class Inherrt0
{
  public static void main(String[] ar)
  {
   B obj=new B();
   obj.m1();
   obj.m2();
  }
}
