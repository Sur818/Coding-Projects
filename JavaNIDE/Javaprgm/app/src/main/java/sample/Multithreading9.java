package sample;
class secondthread extends Thread
 {
   public void run()
   {
    for(int i=1;i<=10;i++)
    {
      System.out.println("secondthread="+Thread.currentThread().getName());
    }
   }
  public void run(int x)
   {
     for(int i=1;i<=x;i++)
     {
       System.out.println(i);
     }
   }
  
}
class ThirdThread extends Thread
{
  
public void run()
{
  for(int i=1;i<=10;i++)
  {
    System.out.println("Thirdthread="+Thread.currentThread().getName());
    
  }
  
}
}
class Multithreading9
{
public static void main (String[] ar)
{
  secondthread obj=new secondthread();
   obj.setName("hello");
   obj.start();
   obj.run(5);
   ThirdThread obj1=new ThirdThread();
obj1.setName("bye");
obj1.start();
//Thread.currentThread.setName("suraj");
//t.setName("world"); 
for(int i=0;i<=10;i++)
{
System.out.println(Thread.currentThread().getName());
}
}
}
