package sample;

 class Mythread extends Thread
{
 
 public void run()
  {
    try
    {
     for(int i=0;i<=10;i++)
    {
      System.out.println("hello");
    Thread.sleep(1000);
      }
   
}
catch(Exception e)
{

}
}
}
class Test78 extends Thread
{
public void run()
{
  try
{
    
  for(int i=0;i<=10;i++)
  {
    System.out.println("bye");
  Thread.sleep(1000);
  }
  }
  
catch(Exception e)
{
  }
  }
  }
  class Multithreading1
{
  public static void main (String[] ar)
  {
  
 Mythread obj=new Mythread();
 obj.start();
 Test78 obj1=new Test78();
 obj1.start();
 
  
}
  
  
}
