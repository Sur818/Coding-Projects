package sample;
 class Multithreading13 implements Runnable
 {
  public void run ()
  {
    for(int i=1;i<=10;i++)
    {
  System.out.println("user defined thraed created");
  }
  System.out.println(Thread.currentThread().getName());
  }
  
public static void main (String[] ar)
{
Multithreading13 obj=new Multithreading13();
Thread obj1=new Thread(obj);
obj1.start();
obj1.setName("thread above main");
for(int i=1;i<=10;i++)
{
  System.out.println("main thread1.....");
}
System.out.println(Thread.currentThread().getName());
for(int i=1;i<=10;i++)
{
  System.out.println("main thread2.....");
}
System.out.println(Thread.currentThread().getName());
}
}

