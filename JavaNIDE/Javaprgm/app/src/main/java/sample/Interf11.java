package sample;
import java.util.*;

interface I17
{
  void m1(int n,int m);
}
class Sample17 implements I17
{
 int i,n,sum=0,m;
public void m1(int n,int m)
{
  int d=1,j=1;
for(i=n;i<=m;i=i+d)
{
System.out.print((i)+" ");
d=d+j;
j++;
sum=sum+i;
}
System.out.print("sum of seriese="+sum);
}
}
class Interf11
{
 public static void main (String[] ar)
 {
   int n,p;
  Scanner m=new Scanner(System.in);
  System.out.println("enter first term");
  n=m.nextInt();
  System.out.println("enter last term");
  p=m.nextInt();
  Sample17 obj=new Sample17();
  obj.m1(n,p);
 }
}
