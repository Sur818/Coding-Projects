package sample;
import java.util.*;
 class Hello
 {
   protected int sum=0,i,j,n1,n,x;
  void setdata(int x)
   {
    n=x;
   }
  void m1(int n)
  {
    for(i=1;n!=0;n++)
    {
      n1=n%10;
      sum=sum+n1*n1*n1;
      n=n/10;
    }
    if(sum==n)
    {
      System.out.print("Armstrong no");
      
    }
    else
{
 System.out.println("not Armstrong no");
 }
}
   
  }
  class Bye extends Hello
{
 void m1()
 {
  for(i=0;i<=n;i++)
  {
      for(j=i;j!=0;j++)
      {
        n1=j%10;
        sum=sum+n1*n1*n1;
         j=j/10;
         if(sum==i)
         {
          System.out.print(i);
         }
      }
  }
 }
}
class Methodover9

{
 public static void main(String[] sr)
 {
   int z;
  System.out.println("enter the no");
  Scanner m=new Scanner(System.in);
  z=m.nextInt();
  Hello obj=new Hello();
  obj.setdata(z);
  obj.m1(z);
  Bye obj1=new Bye();
  obj1.m1();
  } 

}

