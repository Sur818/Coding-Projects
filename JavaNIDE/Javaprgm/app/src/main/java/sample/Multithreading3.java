package sample;
 class Multithreading3 extends Thread
 {
  public void run()
   {
     try
{
     for(int i=20;i>=-1;i--)
     {
       System.out.println(20/i);
       Thread.sleep(100);
     }
   }
   catch(Exception e)
{
  System.out.println("irrupted"+e);
}

}
 public static void main(String[] ar)
 {
  Multithreading3 obj=new Multithreading3();
  obj.start();
  for(int i=1;i<=20;i++)
  {
    System.out.println("hello World");
  }
   
 }
}
