package sample;

 class Outer
 {
   void m1()
   {
   System.out.println("oh namah shivay");
   }
  class Iner1
{
  void m2()
  {
 System.out.println("jai shri ram");
 }
}
class Iner2
{
  void m3()
  {
  System.out.println("jai bholenath");
  }
}
}
class Inerc1
{
public static void main(String[] ar)
{
Outer obj=new Outer();
Outer.Iner1 obj1=new Outer().new Iner1();
Outer.Iner2 obj2=new Outer().new Iner2();
obj.m1();
obj1.m2();
obj2.m3();
}
}


