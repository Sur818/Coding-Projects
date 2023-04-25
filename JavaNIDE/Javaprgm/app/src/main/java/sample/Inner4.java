package sample;

 class As1
 {
   void m1()
   {
     System.out.println("hellk world");
   }
 
 class Bs1
{
  void m2()
  {
  System.out.println("hello");
  }
}
class Cs1 extends Bs1
{
  void m3()
  {
 System.out.println("bye");
 }
}

}
class Inner4
{
  public static void main(String[] ar)
  {
   As1 obj=new As1();
   obj.m1();
   As1.Cs1 obj1=new As1().new Cs1();
     obj1.m2();
     obj1.m3();
   
  }
}
