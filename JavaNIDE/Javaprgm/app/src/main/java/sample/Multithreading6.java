package sample;

class Test11 extends Thread
{
public void run()
{
  try
{
  for(int i=1;i<=10;i++)
  {
 System.out.println("hello");
 Thread.sleep(100);
 }
 }
 catch(Exception e)
 {
   
   System.out.println("Test11 code errupted");
 }
}
}
class  Test25 extends Thread
{
 public void run()
  {
    try
{
   for(int i=1;i<=10;i++)
    {
    System.out.println("bye");
    Thread.sleep(100);
    }
    }
    catch (Exception e)
    {
      System.out.println("Test25 code errupted");
    }
  }
  }
class Multithreading6 extends Thread
 {
 
   public void run()
   {
     try
{
     for(int i=1;i<=10;i++)
     { 
     System.out.println("world!");
     Thread.sleep(100);
     }
     }
     catch(Exception e)
     {
      //no code is here  
       
     }
   }
   public static void main (String[] ar)
   {
     Test11 obj1=new Test11();
     obj1.start();
     obj1.setPriority(Thread.MAX_PRIORITY);
     Test25 obj2=new Test25();
     obj2.start();
     Multithreading6 obj3=new Multithreading6();
     obj3.start();
    obj3.setPriority(Thread.MIN_PRIORITY);
     try
{
     for(int i=1;i<=10;i++)
     {
       System.out.println("suraj singh");
       Thread.sleep(100);
     }
   }
   catch(Exception e)
{
  
  
  
}
}
  
}
