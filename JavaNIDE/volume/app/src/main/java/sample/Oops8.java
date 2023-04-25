package sample;
import java.util.*;
 class Oops8 
 {
  static int a,b,c,sum;
  Oops8(int a,int b)
  {
   this.a=a;
   this.b=b;
   sum=0;
  }
  static int add()
  {
   c=a+b;
   System.out.println(c+"+");
   return c;
  }
  static
{
 while (a!=0&&b!=0)
 {
   Scanner m=new Scanner(System.in);
   sum=sum+add();
  System.out.print("a=");
  a=m.nextInt();
  System.out.print("b=");
  b=m.nextInt();
  
 }
}
public static void main(String[] ar)
{
   Oops8 obj=new Oops8(2,5);
}
}
