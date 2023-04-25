package sample;

 interface I13
 {
  void m1();
}
interface I14
{
  void m2();
}
abstract class Sample8 
{
abstract void m3();
void m4()
{
  System.out.println("hello india");
}
}
class Sample9 extends Sample8 implements I13,I14
{
 public void m1()
 {
   System.out.println("hello world");
 } 
 public void m2()
 {
   System.out.println("hello btps");
 }
 void m3()
 {
   System.out.println("hello");
 }
}
class InterfI9 
{
  public static void main (String[] ar)
  {
   Sample9 obj= new Sample9();
   obj.m1();
   obj.m2();
   obj.m3();
   obj.m4();
  }
}
