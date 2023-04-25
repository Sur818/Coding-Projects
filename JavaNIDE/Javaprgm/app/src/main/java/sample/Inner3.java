package sample;
 class OutA
{
  void m1()
  {
    System.out.println("hello world!");
  }
  
  class Out1A
{
  void m2()
  {
    System.out.println("hello india!");
  }
  class Iner1B
{
 void m3()
 {
   System.out.println("hello jaunpur!");
 }
 
}

}
  
  class InerB
{
  void m4()
  {
    System.out.println("hello suraj");
  }
  
}

}
class Inner3
{
  public static void main(String[] ar)
  {
    OutA.Out1A.Iner1B obj=new OutA().new Out1A().new Iner1B();
    obj.m3();
    
  }
}
  
  
  
