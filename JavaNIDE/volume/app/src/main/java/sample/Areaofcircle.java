package sample;
import java.util.*;
import java.lang.*;

 class Areaofcircle
 {
  int r;
  void area(int r)
  {
   double a;
   a=3.14*r*r;
   System.out.println("area is"+a);
  }
  void circum(int r)
  {
    double c;
    c=2*3.14*r;
    System.out.print("circum is"+c);
  }
public static void main(String[] arr)
{
 Areaofcircle t= new Areaofcircle();
 Scanner m=new Scanner(System.in);
 System.out.println("enter the no");
 t.r=m.nextInt();
t.area(t.r);
t.circum(t.r);
 
}
}
