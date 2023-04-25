package sample;
class As5
 {
   void m1()
   {
    class Bs5
    {
     int a=10;
     int b=10;
      void t1()
      {
      System.out.println(a+b);
      }
      void t2()
      {
       System.out.println(a*b);
      }
      void t3()
      {
        System.out.println(a/b);
      }
      }
      Bs5 z=new Bs5();
      z.t1();
      z.t2();
     z.t3();
      


   }
  
}
class inner8
{
  public static void main (String[] ar)
  {
    As5 obj=new As5();
    obj.m1();
  }
}
