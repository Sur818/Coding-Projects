package sample;
import java.util.*;

 interface I1
 {
   void m1();
}
interface I2
{
void m2();
}
class Chilsd implements I1,I2
{
 public void m1()
 {
   System.out.println("m1=Calling");
 }
 public void m2()
 {
  System.out.println("m2=calling");
 }
 }
 class I
{
public static void main (String[] ar)
{
Chilsd obj=new Chilsd();
obj.m1();
obj.m2();
}
}
