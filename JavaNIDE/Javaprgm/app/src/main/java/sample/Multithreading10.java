package sample;
class Suraj1
 {
  void start()
  {
 
      } 
}
class Singh1 extends Suraj1
{
void run()
 {
  try
{
   for(int i=1;i<=10;i++)
   { 
     Thread.sleep(100);
   System.out.println("run method override");
   }
}
 catch(Exception e)
{
  
 }
 }
}
class Multithreading10
{
public static void main(String[] ar)
{
Singh1 obj=new Singh1();
obj.start();
obj.run();
try
{

for(int i=1;i<=10;i++)
{
  System.out.println("main thread");
}
}
catch(Exception e)
{
  
  }
}
}