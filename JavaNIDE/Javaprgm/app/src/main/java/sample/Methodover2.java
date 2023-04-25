package sample;
import java.util.*;

 class Base
 {
protected int a,b,c;
   
   void setdata(int x,int y)
   {
    a=x;
    b=y;
   }
   
 void setdata1(int x,int y,int z)
 {
  a=x;
  b=y;
  c=z;
 }
  
 int m1()
 {
   c=a;
   a=b;
   b=c;
  System.out.print("a="+a+"b="+b);
  return 0;
 }
 }
 
 class Child extends Base
 {
  double x1,x2,m;
   int m1()
   {
     m=b*b-4*a*c;
    x1=(b+Math.sqrt(m))/2*a;
    x2=((b-Math.sqrt(m))/2*a);
    System.out.print("roots are="+x1+" "+x2);
     
    return 0;
   }
 }
 class Methodover2
 {
  public static void main(String[] ar)
  {
    int x,u,v;
    Child obj=new Child();
    Scanner m=new Scanner(System.in);
    System.out.println("enter your choice=");
    x=m.nextInt();
    switch(x)
    {
     case 1:
     {
     System.out.println("enter a&b");
     u=m.nextInt();
     v=m.nextInt();
     obj.setdata(u,v);
     obj.m1();
   break;
   }
   case 2:
   {
     System.out.println("enter value of a b,c");
     obj.a=m.nextInt();
     obj.b=m.nextInt();
     obj.c=m.nextInt();
     obj.setdata1(obj.a,obj.b,obj.c);
     obj.m1();
    break;
    }
     default:
     {
      System.out.print("enter valid choice");
     }
     
 
   
  }
 }
 }
 

