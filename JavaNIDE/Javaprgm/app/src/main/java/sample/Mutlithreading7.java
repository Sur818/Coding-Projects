package sample;
class Mutlithreading7 extends Thread
 {
  public void run()
   {
     for(int i=1;i<=10;i++)
     {
       
    System.out.println("user defined thread");
    System.out.println(Thread.currentThread().getName());
    }
   }
   
   public static void main (String[] ar)
   {
     Mutlithreading7 obj=new Mutlithreading7();
     obj.start();
     for(int i=1;i<=10;i++)
     {
       
    System.out.println(Thread.currentThread().getName());
     }
   }
  }
