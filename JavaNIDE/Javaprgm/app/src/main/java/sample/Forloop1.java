package sample;
import java.util.*;

class Forloop1 
{
  public static void main (String[] ar)
  {
    int i,n,sum=0;
    System.out.println("enter range");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=1;i<=n;i++)
     {
       System.out.print(i);
       if(i<n)
       {
         System.out.print("+");
       }
       sum=sum+i;
       
     }
     System.out.print("\nsum of n natural no="+sum);
  }
  
}
