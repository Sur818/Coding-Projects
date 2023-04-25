package sample;
import java.util.*;

 class Base1
 {
 protected double R,A,C;
 void setdata(double r)
 {
  R=r;
  Area();
 }
 private void Area()
 {
   A=3.14*R*R;
   System.out.println("Area="+A);
 }
 }

class Derrived extends Base1 
{
 void Circum()
{
 C=2*3.14*R;
 System.out.println("Circum="+C);
}
}
class Inhert3
{
public static void main(String[] ar)
{
  double r;
Derrived obj=new Derrived ();
Scanner m=new Scanner(System.in);
System.out.println("Enter area of circle");
 r=m.nextDouble();
obj.setdata(r);
//obj.Circum();
}
}
