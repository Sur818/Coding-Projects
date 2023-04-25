package sample;
import java.util.*;
abstract class refrence
{
  int r;
  double C,A;
 abstract void area();
  
}
class Calb extends refrence
{
 void area()
 {
   A=3.14*r*r;
   System.out.println("Area="+A);
  
 }
 void circum()
 {
   C=2*3.14*r;
   System.out.println("circum="+C); 
 }
}
class abs23
{
  public static void main(String[] ar)
  
  {
   refrence v=new Calb();
     v.r=10;
     v.area();
    // v.circum();//invalid
  }
}

