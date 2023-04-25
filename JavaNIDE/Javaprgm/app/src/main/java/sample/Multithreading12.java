package sample;
class Multithreading12 implements Runnable
{
 public void run()
 {
 for(int i=1;i<=10;i++)
 {
   System.out.println("hello");
 }
 }
  public static void main (String[] ar)
  {
   Multithreading12 m=new Multithreading12();
     Thread t=new Thread(m);
     t.start();
     for(int i=1;i<=10;i++)
     {
       System.out.println("bye");
     }
  }
}
