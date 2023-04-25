package sample;
import java.util.*;

abstract class Circl
 {
   int r;
   double A,C;
  void area()
  {
   A=3.14*r*r;
   System.out.println("Area ="+A);
  }
  abstract void circum();
}
class Acir extends Circl
{
void circum()
{
C=2*3.14*r;
System.out.println("circum="+C);
}
}
class Inheritan11
{
public static void main(String[] ar)
{
 Circl obj=new Acir();
  System.out.println("enter radius");
  Scanner m= new Scanner(System.in);
 obj.r=m.nextInt();
  
  obj.circum();
  obj.area();
  }
  }
  
