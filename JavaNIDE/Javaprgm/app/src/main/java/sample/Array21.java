package sample;
import java.util.*;
 class Array21
{
 
public static void main (String[] ar)
{
  
  int i,j,n,max,min;
  double count=0,sum=0;
  System.out.println("enter size of array");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  int []a=new int[n];
  for(i=0;i<n;i++)
  {
    System.out.println("a["+i+"]=");
    a[i]=m.nextInt();
  }
  max=a[0];
  min=a[2];
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
    else if(a[i]<min)
    {
      min=a[i];
    }
    
  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=max&&a[i]!=min)
    {
      count++;
      sum=sum+a[i];
    }
  }
  System.out.println("avg ="+sum/count);
  
  
}
  
}
