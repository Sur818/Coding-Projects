package sample;
import java.util.*;

interface Circle3
 {
   
  void area();
}
interface para
{
  void circum();
}
class Test7 implements Circle3,para
{
  int r=5;
  double A,C;
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
class Interfac6
{
public static void main(String[] ar)
{
 // Test7 obj=new Test7();
//Scanner m=new Scanner(System.in);
//System.out.println("entee radius");
//obj.r=m.nextInt();
//obj.area();
//obj.circum();
Circle3 obj1=new Test7();
//obj1.r=m.nextInt();
obj1.area();
//obj1.circum();
}
}

