package sample;
//import java.util.*;
abstract class Shape
 {
   abstract void area();
    
}
class Circle1 extends Shape
{
  int r;
Circle1(int x)
{
 r=x;
}
void area()
{
double A=3.14*r*r;
System.out.println("area of circle="+A);
}
void circum()
{
  double C=2*3.14*r;
  System.out.println("circumfrence of circle="+C);
  
}
}
class Rect1 extends Shape
{
  //Scanner m=new Scanner(System.in);
  int a,b;
  Rect1(int x,int y)
  {
   a=x;
   b=y;
  }
  void area()
  {
    double A=a*b;
    System.out.println("Area of Rect="+A);
  }
  
  void Perim()
  {
   double P=2*(a+b);
   System.out.println("Perimeter of ractangle="+P);
  }
  
}
class abs24
{
  public static void main(String[] ar)
 {
    Shape p,q;
    p=new Circle1(2);
    p.area();
   // p.circum();
    q=new Rect1(3,4);
    q.area();
   // q.Perim();
  }
}
