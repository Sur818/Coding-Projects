package sample;
import java.util.*;
class Array16
 {
   
  public static void main (String[] ar)
  {
    int i,n,j,k;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n+1];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[i]==a[j])
        {
          for(k=j;k<n;k++)
          {
            a[k]=a[k+1];
          }
          n--;
          i--;
        }
      }
      
    }
    System.out.println("after removing of duplication");
    for(i=0;i<n;i++)
    {
      System.out.println(a[i]);
    }
    
    
  
    }
    }
