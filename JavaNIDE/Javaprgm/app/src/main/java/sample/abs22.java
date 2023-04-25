package sample;

abstract class statikmethod
{
void  m1()
  {
   System.out.println("static method in absclass");
  }
   abstract void m2();//public xxx

}
class sample12 extends statikmethod
{
  void m2()
  {
    System.out.println("oveeided method");
   
  }
  void m3()
  {
    System.out.println(" extra method");
  }
 

}
class abs22
{
public static void main (String[] ar)
{
  statikmethod obj=new sample12();
obj.m1();
obj.m2();
//obj.m3();
}
}
