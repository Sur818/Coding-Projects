package sample;
class Innerclass1 
{ 
  class A
{
  void m1()
  {
   System.out.println("hello"); 
   } 
 
}
class B
{
  
  void m2()
  {
  System.out.println("bye");
  }
}
  
public static void main (String[] ar)
{
  
 Innerclass1.A obj=new Innerclass1().new A();
    obj.m1();  
  
}
}
