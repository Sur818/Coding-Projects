package sample;
import java.util.*;

class Oops1 
{
 int a,b,temp,n;

 {
   System.out.print("after swapping");
}

 void m1()
 {
  temp=a;
  a=b;
  b=temp;
  System.out.print("a="+b+"\n"+"b="+a); 
}
//class Test1
//{
 public static void main(String ar)
 {
  Oops1 obj=new Oops1();
 Scanner t=new Scanner(System.in);
 obj.n=t.nextInt();
 obj.m1();
 
 }
}
