package sample;
import java.util.*;

interface  sample2
 {
 void m1();
// void m3()
// {
 //  System.out.println("hello");
// }
 
}
class Test2 implements  sample2
{
  int i,fact,n;
  double sum,z;
public void m1()
{
  System.out.println("enter range");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
    z=i+1;
    fact=fact*i;
 System.out.print(i+"/"+"("+i+"-"+i+"!"+"/"+(int)z+"^2"+")");
   if(i<n)
   {
     System.out.print(" + ");
   }
   sum=sum+(i/(i-(fact/(z*z))));
  }
  System.out.println("sum of seriese="+sum);
}
}
class Inter6
{
public static void main (String[] ar)
{
  Test2 obj=new Test2();
  obj.m1();
  }
  }

