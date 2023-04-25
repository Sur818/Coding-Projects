package sample;
import java.util.*;
abstract class Prime
{ 
  int i,n,f=0,sum=0,j;
  abstract void prime(int n);
}
class Factor extends Prime
{
  void prime(int n)
  {
    for(j=2;j<=n;j++)
    { 
      if(n%j==0)
      {
       f=0;
    for(i=2;i<=j/2;i++)
    {
       if(j%i==0)
       {
        f=1;
        break;
       }
    }
   if(f==0)
   {
     System.out.print(j+" ");
     sum=sum+j;
   }
  }
  }
  System.out.println("\nsum of prime factors="+sum);
  }
  }
  class abs2
{
  static
{
 System.out.println("prime factor nonrepeated:-");
}
  public static void main(String[] ar)
  {
    int n;
   Factor obj=new Factor();
   System.out.println("enter no ");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   obj.prime(n);
  }
}
  
