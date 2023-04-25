package sample;
class M
{
  int a,b,c;
  void m1()
  {
    c=a+b;
    System.out.print("sum is"+c);

  }
  
}
class U extends M
{
 public void m1()
 {
  c=a*b;
  System.out.println("prod is "+c);
 }
}
class Methodover
{
public static void main(String[] ar)
{
 U obj=new U();
  
  obj.a=10;
  obj.b=10;
  obj.m1();
  M obj1=new M();
   obj1.m1();
  
  }
  }
  
  
  
  
