package sample;
class Abdfr implements Runnable 
{
 
 public void run()
 {
   for(int i=1;i<=10;i++)
   {
  System.out.println("user defined thred1...");
 }
  System.out.println(Thread.currentThread().getName());
}
}


class Asbc implements Runnable
{
public void run()
{
  for(int i=1;i<=10;i++)
  {
    System.out.println("user defined thread2...");
}

System.out.println(Thread.currentThread().getName());
}
}
class Multithreading14
{
  public static void main (String[] ar)
  {
    Abdfr m=new Abdfr();
    Thread t=new Thread(m);
    t.start();
    Asbc n=new Asbc();
    Thread p=new Thread(n);
    p.start();
    for(int i=1;i<=10;i++)
    {
      System.out.println("main thread");
    }
  }
  
  
}
