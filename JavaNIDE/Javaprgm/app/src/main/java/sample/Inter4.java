package sample;
import java.util.*;
 interface Circle12
{
  void area();
  void circum();
  
}
interface Rectangle12
{
void area();
void perim();
}
class prgm implements Circle12
{
 int r;
 double A,C;
  prgm(int n)
  {
    r=n;
  }
public void area()
{
  A=3.14*r*r;
  System.out.println("area="+A);
}
public void circum()
{
C=2*3.14*r;
System.out.println("Circum="+C);
}
}
class prgm1 implements Rectangle12
{
  int a,b;
prgm1(int x, int y)
{
 x=a;
 y=b;
}
double A,C;
public void area()
{
A=a*b;
System.out.println("Area="+A);
}
public void perim()
{
C=2*(a+b);
System.out.println("Perim="+C);
}
}
class inter4
{
  public static void main (String[] ar)
  {
   
   Circle12 obj=new prgm(5);
   obj.area();
   obj.circum();
   Rectangle12 obj1=new prgm1(10,6);
   obj1.area();
   obj1.perim();
   
  }
}
