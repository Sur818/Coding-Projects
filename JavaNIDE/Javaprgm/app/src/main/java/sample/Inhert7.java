package sample;
import java.util.*;

 class Animal
 {
   protected int n1,m,sum,z,i,j,n;
   int rev(int n)
   {
     for(i=1;n!=0;i++)
     {
       n1=n%10;
      sum=sum*10+n1;
      n=n/10;
     }
     return sum;
   }
  void disarium(int n)
  {
    z=n;
    n=rev(n);
    sum=0;
   for(i=1;n!=0;i++)
   {
    n1=n%10;
    sum=sum+(int)Math.pow(n1,i);
    n=n/10;
   }
   if(sum==z)
   {
    System.out.println("disarium no");
   }
   else
{
  System.out.println("not a disarium no");
}
   sum=0;
  }
 
}
class Dog extends Animal
{
  void setdata(int x)
  {
    n=x;
    disarium2();
  }
  void disarium2()
  { 
    for(i=1;i<=n;i++)
   { 
     z=i;
     i=rev(i);
     sum=0;
    for(j=1;i!=0;j++)
    {
     n1=i%10;
    sum=sum+(int)Math.pow(n1,j);
    i=i/10;
    }
    i=z;
    if(sum==z)
    {
     System.out.println(z);
   }
   
 }
 }
 } 
 class Inhert7
{
 public static void main (String[] ar)
 {
   int x;
   Scanner m=new Scanner (System.in);
   Dog obj=new Dog();
   System.out.println("enter the no");
   x=m.nextInt();
  obj.disarium(x);   
   System.out.println("enter the range");
      x=m.nextInt();
   obj.setdata(x);
   
   
 }
}
