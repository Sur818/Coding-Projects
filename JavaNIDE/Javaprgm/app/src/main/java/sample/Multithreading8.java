package sample;
class Multithreading8 extends Thread
{
  
  public void run()
  {
    for(int i=1;i<=10;i++)
    {
      
   System.out.println(Thread.currentThread().getName());
   }
   
  }
  public static void main (String[] ar)
  {
    Multithreading8 s=new Multithreading8();
    s.setName("My own thread");
    s.start();
   // Thread t=new Thread.currentThread();
   // t.setName("chagne name");
   // t.start();
    System.out.println(Thread.currentThread().getName());
  }
 
}
