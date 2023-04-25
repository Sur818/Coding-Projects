package sample;
import java.util.*;

abstract class Buzzno
 {
   int i,f,n1,n,z;
  abstract void buzzno(int n);
}

class m1 extends Buzzno
{
  
 void buzzno(int n)
 {
  if(n%10==7||n%7==0)
 {
   f=1;
 }
 }
 
 void show(int n)
 {
   buzzno(n);
  if(f==1)
  {
   System.out.println("Buzz no");
  }
  else
{
 System.out.println("not buzz no");
}
 }
 
}

class abs5

{
  public static void main(String[] ar)
  {
    int n;
    Scanner m=new Scanner(System.in);
    m1 obj=new m1();
    System.out.println("enter no");
    n=m.nextInt();
    obj.show(n);
    
  }
}

