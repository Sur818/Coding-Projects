package sample;
import java.util.*;

class Forloop2 
{
  
  public static void main (String[] ar)
  {
    int n,i,sum=0,m;
    System.out.println("enter no of term");
    Scanner z=new Scanner(System.in);
    n=z.nextInt();
    for(i=1;i<=n;i++)
    {
      m=i*i;
      System.out.print(i+"^2");
      if(i<n)
      {
        System.out.print("+");
      }
     sum=sum+m;
      
    }
    System.out.print("\nsum of seriese="+sum);
  }
}

