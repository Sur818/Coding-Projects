package sample;
import java.util.*;
class First1e
 {
   int i,j,sum,r;
   double A,C,P;
   void setdata(int r)
   {
     this.r=r;
     area();
     circum();
   }
 private void area()
  {
   A=3.14*r*r;
   System.out.println("Area of circles="+A);

  }
  private void circum()
{
  C=2*3.14*r;
  System.out.println("Circum of Circle="+C); 
}

}
class Second2e extends First1e
{
  
  void area(int a,int b)
  {
    A=a*b;
    System.out.println("area of rectangle="+A);
    per(a,b);
  }
 private void per(int a,int b)
  {
    P=2*(a+b);
    System.out.println("perimeter of ractngle="+P);
  }
  
  }
  class Inheritance11
{
 public static void main (String[] ar)
  {
    int r,a,b;
    System.out.println("enter radius");
    Scanner m=new Scanner(System.in);
    r=m.nextInt();
    Second2e obj=new Second2e();
    obj.setdata(r);
   System.out.println("enter length and width");
    a=m.nextInt();
    b=m.nextInt();
   obj.area(a,b);
  }
}
