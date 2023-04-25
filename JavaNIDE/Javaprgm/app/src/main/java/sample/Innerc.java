package sample;
class Ar1
 {
   int a;
   void m3()
   {
   System.out.println("hello india!");
   }
   static class Br1
{ 
    void m1()
    {
    System.out.println("hello btps");
    }
}
  
  static class Cr1
{
  void m2()
  {
  System.out.println("hello world!");
  }
}
}
class Innerc
{
public static void main (String[] ar)
{
 Ar1 obj=new Ar1();
  Ar1.Br1 obj1=new Ar1.Br1(); 
 Ar1.Cr1 obj2=new Ar1.Cr1();
  obj.m3();
  obj1.m1();
  obj2.m2();
}
}
