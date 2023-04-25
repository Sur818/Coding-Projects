package sample;
import java.util.*;

abstract class Shape1
 {
  int a,b,r;
  double A,P,C;
  abstract void area();
  
}
class Circle2 extends Shape1
{
 Circle2(int x)
 {
   r=x;
 }
 void area()
 {
    A= 3.14*r*r;
   System.out.println("Area of circle="+A);
 }
 void circum()
 {
   C=2*3.14*r;
   System.out.println("circum of circle="+C);
 }
 
}
class Rect2 extends Shape1
{
  Rect2(int x,int y)
  {
    a=x;
    b=y;
  }
  void area ()
  {
   A=a*b;
   System.out.println("Area of rectangle="+A);
  }
  void perim()
  {
    P=2*(a+b);
    System.out.println("perimeter of rectangle="+P);
    
  }
}
class abs25
{
  public static void main (String[] ar)
  {  
    int a,b,r;
   Scanner m= new Scanner(System.in);
   System.out.println("enter radius");
   r=m.nextInt();
   Shape1 p,q;
   p=new Circle2(r);
   p.area();
   //p.circum();
   System.out.println("enter lenth of rect");
   a=m.nextInt();
   System.out.println("enter width");
   b=m.nextInt();
   q=new Rect2(a,b);
   q.area();
   //q.perim();
   
  }
}
