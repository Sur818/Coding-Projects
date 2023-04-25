
package sample;
import java.util.*;

class Papa
 {
   protected int i,j,m,count,p;
  void prime(int n)
  {
  for(i=2;i<=n/2;i++)
{
 m=n%i;
 if(m==0)
  {
  count++;
  }
  }
  if(count>=1)
  {
    System.out.println("not prime no");
  }
else
{
System.out.println("prime no");
}
count=0;
}
}
class Beta extends Papa
{
 void m1()
 {
   int n;
  System.out.println("enter the range");
  Scanner z=new Scanner(System.in);
  n=z.nextInt();
  prime1(n);
  }
  void prime1(int n)
  {
 for(i=1;i<=n;i++)
 {
   count=0;
   for(j=2;j<=i/2;j++)
   {
    m=i%j;
    if(m==0)
    {
     count++;
    }
   }
   if(count==0)
   {
     p++;
    System.out.println(i);
   }
   
   
 }
 System.out.println("total no of prime no="+p);
    
  }
}
class Inhert6
{
  public static void main(String[] ar)
  {
    int n;
   Beta obj=new Beta();
   Scanner m=new Scanner(System.in);
   System.out.println("enter any no");
   n=m.nextInt();
   obj.prime(n);
   obj.m1();
   
   
  }
}
