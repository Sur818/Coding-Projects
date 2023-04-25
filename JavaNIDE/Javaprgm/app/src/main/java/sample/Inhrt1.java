package sample;
import java.util.*;
class First1
{
  double x,y;
void m1(double a,double b)
{
 a=a*60+b;
 System.out.println("total minutes="+a);
 a=a*60;
 System.out.println("total sec="+a);
 }
}
class Second2 extends First1
{
void m2(double a,double b)
{
 
 a=a+b/60;
 System.out.println("total hour="+a);
 }
 }
 class Inhrt1
{
  public static void main(String[] ar)
  {

    Second2 obj=new Second2();
    Scanner m=new Scanner(System.in);
    System.out.println("enter hour");
   obj.x=m.nextDouble();
    System.out.println("enter minutes");
   obj.y=m.nextDouble();
    obj.m1(obj.x,obj.y);
    obj.m2(obj.x,obj.y);


    
    
  }
}
 

