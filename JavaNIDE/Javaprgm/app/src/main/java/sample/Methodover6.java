package sample;
import java.util.*;

class Circle
{
  final double pi;
  protected double A,C;
  Circle()
  {
   pi=3.14;
  }
 void area(int r)
 {
  A=pi*r*r;
  System.out.print("Area="+A);
  circum(r);
 }
 void circum(int r)
 {
  C=2*pi*r;
  System.out.println("circum="+C);
 }
  
}

class Sphere extends Circle
{
   void area(int r)
 {
  A=4*pi*r*r;
  System.out.println("Area="+A);
  vol(r);
 }
 void vol(int r)
 {
  C=4/3*pi*r*r*r;
  System.out.println("circum="+C);
 }
 }
 class Methodover6
{
  public static void main(String ar)
  {
   int r;
   Scanner m=new Scanner(System.in);
   System.out.println("enter r");
   r=m.nextInt();
   Circle obj=new Circle ();
   obj.area(r);
   Sphere obj1=new Sphere();
   obj1.area(r);
   
   
  }
}
  
