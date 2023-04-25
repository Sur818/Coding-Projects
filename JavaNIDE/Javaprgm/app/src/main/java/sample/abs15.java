package sample;
import java.util.*;

abstract class  Amicableno
 {
 protected int i,sum=0,sum1=0;
 abstract void amicable(int a ,int b);
}
class No extends Amicableno
{
  void amicable(int a,int b)
  {
   for(i=1;i<=a/2;i++) 
  {
   if(a%i==0)
   {
     sum=sum+i;
   }
  }
  for(i=1;i<=b/2;i++)
  {
   if(b%i==0)
   {
    sum1=sum1+i;
   }
  }
  if(sum==b&&sum1==a)
  {
    System.out.println("amicable no");
    
    }
    else
{
 System.out.println("not amicable no");
}
  }
}
class abs15
{
  public static void main(String[] ar)
  {
    int n,z;
    System.out.println("enter two no");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    z=m.nextInt();
    No obj=new No();
    obj.amicable(n,z);
    
  }
}
