package sample;
import java.util.*;

class U1
{
  int i,j,k;
 void Pattern1(int n)
 {
  for(i=1;i<=n;i++)
  {
   for(j=i;j<=n;j++)
   {
    System.out.print(" ");
    }
    for(k=n+1-i;k<=n;k++)
    {
      System.out.print(k);
    }
    System.out.print("\n");
   }
  }
 void Pattern2(int n)
 {
   for(i=n;i>=1;i--)
  {
    for(k=1;k<=i;k++)
    {
      System.out.print(k);
    }
    System.out.print("\n");
   }
  }
  }
  class V extends U1
{
 void pattern3(int n)
 {
   for(i=1;i<=n;i++)
  {
   for(j=i;j<=n;j++)
   {
    System.out.print(" ");
    }
    for(k=n+1-i;k<=n;k++)
    {
      System.out.print(k);
    }
    System.out.print("\n");
   }
 }
 void pattern4(int n)
 {
   for(i=1;i<=n;i++)
  {
   for(j=i;j<=n;j++)
   {
    System.out.print(" ");
    }
    for(k=1;k<=i;k++)
    {
      System.out.print(k);
    }
    System.out.print("\n");
   }
 }
}

 class Inhert4
{
public static void main (String[] ar)
{
  V obj=new V();
  int n;
  System.out.print("enter no row");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
 obj.Pattern1(n);
 obj.Pattern2(n);
 obj.pattern3(n);
 obj.pattern4(n);
}
}
