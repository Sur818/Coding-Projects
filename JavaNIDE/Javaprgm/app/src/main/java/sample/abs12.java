package sample;
import java.util.*;

abstract class Twinprime
 {
  protected int i,j,n,sum,f=0;
  abstract int prime(int n);
  
}
class Twin extends Twinprime
{
  int prime(int n)
  { 
    f=0;
    for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
       f=1; 
       break; 
      }  
    }
    return f;
  }
  void show(int n)
  {
    for(j=2;j<=n;j++)
    {
      prime(j);
      if(f==0)
      {
       System.out.println(j);
      }
    }
  }
void twinprime(int n)
{
  for(j=1;j<=n;j++)
  {
    if(prime(j)==0&&prime(j+2)==0)
    {
      System.out.println(j+" "+(j+2));
    }
  }
 
}
}
class abs12
{
  public static void main(String[] ar)
  {
    int n;
     Scanner m=new Scanner(System.in);
    Twin obj=new Twin();
    System.out.println("enter choice");
    n=m.nextInt();
   
    switch(n)
    {
     case 1:
     {
      System.out.println("enter range for prime no");
      n=m.nextInt();
      obj.show(n);
      break;
     }
     case 2:
     {
       System.out.println("enter range for twin prime");
      n=m.nextInt();
      obj.twinprime(n);
      break;
       
     }
    }
    
  }
}


