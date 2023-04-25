package samole;
class As3
 {
   void m1()
   {
     System.out.println("hello world");
   }
 
  class Bs3
{
  abstract class Bs31
{
  void m2()
  {
  System.out.println("hello");
  }
  abstract void m5();
  }
  class Bs41 extends Bs31
{ 
  void m5()
{
  System.out.println("hello World!");
}
  
}
  
}
class Cs3
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
class inner6
{
  public static void main(String[] ar)
  {
   As3 obj=new As3 ();
   obj.m1();
   As3.Cs3 obj1=new As3().new Cs3();
     obj1.m4();
     obj1.m3();
    As3.Bs3.Bs41 obj2=new As3().new Bs3().new Bs41();
    obj2.m2();
    obj2.m5();
   
  }
}

