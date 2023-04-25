package sample;
class Ops
 {
  int c,a,b;
 void m1(int a,int b)
 {
   c=a+b;
  System.out.println("sum of given no is"+c);
 }
 void m2()
 {
  c=a*b;
  System.out.println("product is "+c);
 }
 
 public static void main(String[] ar)
 {

   Ops t=new Ops();
  t.a=10;
 t.b=12;
   t.m1(t.a,t.b);
   t.m2();
 
 }
}
