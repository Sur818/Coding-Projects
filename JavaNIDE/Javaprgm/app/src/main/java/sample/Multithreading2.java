package sample;
 class Multithreading2 extends Thread
{
 public void run()
  {
    for(int i=1;i<=10;i++)
    {
   System.out.println("user defined thread");
   }
  }
public static void main (String[] ar)
{
  int i;

  Multithreading2 obj=new Multithreading2();
  obj.start();
 

 for(i=0;i<=50;i++)
 {
   System.out.println("main thread");
   }
}
}
