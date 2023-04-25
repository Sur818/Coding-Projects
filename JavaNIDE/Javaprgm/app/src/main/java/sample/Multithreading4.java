package sample;
import java.util.*;
class Multithreading4 extends Thread
{
  int n,i,sum,m;
  
 public void run()
  {
    try
{
 
   for(i=1;i<=10;i++)
   {
     m=n*i; 
    System.out.println(+n+"*"+i+"="+m);
    sum=sum+m;
   }
   System.out.println("sum of table="+sum);
   Thread.sleep(100);
  }
  catch(Exception e)
  {
    
   
  }
 
}
public static void main (String[] ar)
{
int i;
Multithreading4 obj=new Multithreading4();
System.out.println("enter no");
Scanner m=new Scanner(System.in);
for(i=1;i<=5;i++)
{
  Multithreading4 obj1=new Multithreading4();
  obj1.n=m.nextInt();
  obj1.start();
  
}
for (i=1;i<=5;i++)
{
  System.out.println("hello");
  
}
}
}
