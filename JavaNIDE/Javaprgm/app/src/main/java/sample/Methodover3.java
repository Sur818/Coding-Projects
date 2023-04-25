package sample;
import java.util.*;
class test1
{
  protected int i,sum=0;
void m1(int n)
{
for(i=1;i<=n;i=i+2)
{
System.out.print(i+"+");
sum=sum+i;
}
System.out.println("sum="+sum);
}
}
class test2 extends test1
{

void m1(int n)
{
for(i=0;i<=n;i+=2)
{
System.out.print(i+"+");
sum=sum+i;
}
System.out.println("sum="+sum);
}
}
class Methodover3
{
  public static void main(String[] ar)
  {
  int n;
  test2 obj= new test2();
  test1 obj1=new test1();
  Scanner m=new Scanner(System.in);
  System.out.println("enter the no");
  n=m.nextInt();
  obj.m1(n);
  obj1.m1(n);
  }
  }
