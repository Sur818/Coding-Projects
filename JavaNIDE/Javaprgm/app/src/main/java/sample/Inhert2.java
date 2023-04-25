package sample;

 class  AA
{
  void m1()
  {
   System.out.println("m1-A");
  }
  void m2()
  {

   System.out.println("m2-A");
  }
  
}
class BB extends AA
{
 void m1()
 {
  System.out.println("m3-B");
 }
}
class C extends BB
{
  void m1()
  {
  
  System.out.println("m4-C");
  }

}

class Inhert2
{
public static void main(String[] ar)
{
  C obj=new C();
  obj.m1();
  obj.m2();
 // obj.m3();
 // obj.m4();
}
}
