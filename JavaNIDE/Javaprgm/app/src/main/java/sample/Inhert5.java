package sample;
import java.util.*;

class Father
{
  protected int i,m,sum=0,n;
  void setdata1(int x)
  {
    System.out.println("general table:-");
   n=x;
   table();
  }
 private void table()
  {
   int i=1;
   while(i<=10)
   {
    m=n*i;
   System.out.println(+n+"*"+i+"="+m);
   sum=sum+m;
   i++;
   }
   System.out.println("sum of table="+sum);
   sum=0;
  }
 
}
class Sonu extends Father
{
void setdata2(int x)
 {
 System.out.println("odd table:-");
  n=x;
  oddtable();
 }
 private void oddtable()
 {
   int i=1;
  while(i<=10)
  {
   m=n*i;
   System.out.println(+n+"*"+i+"="+m);
   sum=sum+m;
   i=i+2;
  }
  System.out.println("sum of odd table="+sum);
 sum=0;
 }
} 
class Monu extends Sonu
{
  void setdata3(int x)
  {
    System.out.println("even table:-");
   n=x;
   eventable();
  }
 private void eventable()
 {
   int i=2;
   while(i<=10)
   {
     m=n*i;
     System.out.println(+n+"*"+i+"="+m);
     i=i+2;
     sum=sum+m;
   }
   System.out.println("sum of even table="+sum);
  sum=0;
  }
}
class Inhert5
{
  public static void main(String[] ar)
  {
    int x;
   Scanner r=new Scanner(System.in);
   Monu obj=new Monu ();
   System.out.println("enter the no");
   x=r.nextInt();
   obj.setdata2(x);
   obj.setdata1(x);
   obj.setdata3(x);
  }
}
