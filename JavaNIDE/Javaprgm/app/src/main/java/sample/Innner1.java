package sample;
class OuterA
{
  int a=10;
  void m1()
  {
   System.out.println("hello india!");
  }
 class InnerB
{
  void m2()
  {
    System.out.println("hello world!");
  }
 
}
class InnerC
{
  void m3()
  {
    System.out.println("hello btps!");
  }
 
}
}
class Innner1
{
  public static void main (String[] ar)
  {
    
   OuterA obj=new OuterA();
   OuterA.InnerB obj1=new OuterA().new InnerB();
    OuterA.InnerC obj2=new OuterA().new InnerC();
    obj.m1();
    obj1.m2();
    obj2.m3();

}
}