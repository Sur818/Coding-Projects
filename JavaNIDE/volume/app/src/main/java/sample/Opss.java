package sample;

class Opss 
{
 int r;
 double c;
 
 void area()
 {
   c=3.14*r*r;
 System.out.println("area="+c);
 circum();
 }
 void  circum()
 {
 c=2*3.14*r;
 System.out.println("circum="+c);
 }
//}
//class A
//{
 public static void main(String[] ar)
 {
  Opss obj=new Opss();
  obj.r=10;
  obj.area();
  
 }
}
