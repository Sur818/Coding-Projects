package sample;

class Staticblock
 {
   static int a,b,c;
   Staticblock()
   {
    c=a+b;
    System.out.println("sum is"+c);
   }
  static
{
 a=10;
 b=10;
}
public static void main (String[] ar)
{
  Staticblock t=new Staticblock();
  
}
}
