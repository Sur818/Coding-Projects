package sample;

class Test12 extends Thread
{
public void run()
{
  for(int i=1;i<=5;i++)
  {
 System.out.println("hello");
 }
}
}
class  Test24 extends Thread
{
 public void run()
  {
    for(int i=1;i<=5;i++)
    {
    System.out.println("bye");
    }
  }
  }
class Multithreading5 extends Thread
 {
 
   public void run()
   {
     for(int i=1;i<=5;i++)
     { 
     System.out.println("world!");
     }
   }
   public static void main (String[] ar)
   {
     Test12 obj1=new Test12();
     obj1.start();
     Test24 obj2=new Test24();
     obj2.start();
    obj2.setPriority(Thread.MIN_PRIORITY);
     Multithreading5 obj3=new Multithreading5();
     obj3.start();
     for(int i=1;i<=5;i++)
     {
       System.out.println("suraj singh");
     }
   }
  
}
