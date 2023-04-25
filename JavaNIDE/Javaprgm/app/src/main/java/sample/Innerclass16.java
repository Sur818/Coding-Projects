package sample;
import java.util.*;
class innerclass16
{

class A
{
  int i,n,sum=1;
  void m1()
  {
  System.out.print("enter no of term");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
sum=sum+i;
System.out.print(sum+" ");
      
  }
  System.out.print("sum of series="+sum);
  }
}
  public static void main(String[] args)
  
{
  
  innerclass16.A obj=new innerclass16().new A();
  obj.m1();
  
}
  }
