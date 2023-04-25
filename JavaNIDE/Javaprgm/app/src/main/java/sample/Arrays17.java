package sample;
import java.util.*;
class Arrays17 
{
  static
  {
    System.out.println("pair whose sum=aspecified no");
  }
public static void main (String[] ar)
 {
   
   int i,n,j,z;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n+1];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
    System.out.println("enter no");
     z=m.nextInt();
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {

        if(a[i]+a[j]==z)
        {
          System.out.println(a[i]+"&"+a[j]);
        }
        }
        
      }
   
   
 }
  
  
}
