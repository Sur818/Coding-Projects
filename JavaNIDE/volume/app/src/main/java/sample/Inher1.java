package sample;
class Inher1 
{
 int a,b,c;
  void m1()
  {
   c=a+b;
   System.out.print("sum is"+c);
  }
  void m2()
  {
   c=a*b;
   System.out.print("product is"+c);
  }
  
}
class C extends Inher1
{
 void m3()
 {
  c=a/b;
  System.out.print("produc="+c);
 }
}
class Ufm
{
public static void main(String[] arr)
{
Inher1 obj=new Inher1();
//obj.a=10;
//obj.b=10;
//obj.m1();
//obj.m2();
C obj1=new C();
obj1.a=10;
obj1.b=20;
obj1.m1();
 obj1.m2();
 obj1.m3();
  
}
}
