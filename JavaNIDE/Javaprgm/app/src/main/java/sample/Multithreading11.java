package sample;
class Myshiv extends Thread
{
  public void run()
  {
    try
{
  for(int i=1;i<=10;i++)
    {
      System.out.println("user defined thread-2");
      //System.out.println(Thread.currentThread().getPriority());
        //Thread.sleep(1000);
    }
  }
  catch(Exception e)
  {
    
  }
  }
}
class Ismylord extends Thread
{
 
 public void run()
 {
   try
{
 for(int i=1;i<=10;i++)
 {
   System.out.println("used defined thread -1");
 //Thread.sleep(100000);
 }
}
catch(Exception e)
{
 
}
 }
}
class Multithreading11
{
public static void main(String[] ar)
{
  Myshiv obj=new Myshiv();
  obj.start();
  obj.setPriority(Thread.MAX_PRIORITY);
  Ismylord obj1=new Ismylord();
  obj1.start();
  try
{
 
  for(int i=1;i<=10;i++)
  {
    System.out.println("main thread");
    //Thread.sleep(10000);
  }
  }
  catch(Exception e)
  {
    

  }
  
 
}

}


