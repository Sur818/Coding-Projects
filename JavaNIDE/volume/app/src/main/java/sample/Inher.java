package Inheritance;
import java.lang.*;
 class Inher 
 {
 void m1()
 {
 System.out.println("m1 method");
 }
  
}
class B extends Inher
{
void m2()
{
System.out.println("m2 method");
}
}
class Test
{
public static void main(String[] ar)
{
 Inher obj1=new Inher();
 obj1.m1();
B obj=new B();
obj.m2();
obj.m1();
}
}
