package sample;
import java.util.*;
class Array12 
{
  
public static void main (String[] ar)
{
  int i,n,z,p;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n+1];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
    System.out.print("enter element=");
    z=m.nextInt();
    System.out.print("which posn=");
    p=m.nextInt();
    for(i=n;i>=p-1;i--)
    {
     a[i]=a[i-1];
    }
    a[p-1]=z;
  
  for(i=0;i<n+1;i++)
  {
    System.out.println("a["+i+"]="+a[i]);
  }
}
  
  
  
}
