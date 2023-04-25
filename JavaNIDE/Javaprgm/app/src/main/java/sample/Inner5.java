package sample;

 class As2
 {
   void m1()
   {
     System.out.println("hello world");
   }
 
 abstract class Bs2
{
  void m2()
  {
  System.out.println("hello");
  }
  abstract void m4();
  
}
class Cs2 extends Bs2
{
  void m3()
  {
 System.out.println("bye");
 }
 void m4()
 {
   System.out.println("override method of abstract class Bs2");
 }
}

}
class Inner5
{
  public static void main(String[] ar)
  {
   As2 obj=new As2 ();
   obj.m1();
   As2.Cs2 obj1=new As2().new Cs2();
     obj1.m2();
     obj1.m4();
     obj1.m3();
   
  }
}

