package sample;

class MyThred extends Thread
{
  public void run()
  {
   for (int i=1;i<=10;i++)
    {
   System.out.println("thred1");
   try
{
 
  Thread.sleep(1000);
  
}
  catch(Exception e)
  {
    
  } 
  } 
  }
  
}
class Multithreding
{
  public static void main (String[] ar)
  {
    MyThred obj=new MyThred();
    obj.start();
    
    for(int i=1;i<=10;i++)
    {
      System.out.println("thred2");
      try
{
  Thread.sleep(1000);
  }
catch(Exception e)
{
  
}
  }
    }
    
   
}
