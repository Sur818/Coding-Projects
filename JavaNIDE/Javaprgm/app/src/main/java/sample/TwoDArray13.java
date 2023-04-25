package sample;
import java.util.*;
 class TwoDArray13
 {
   
static int max(int a[])
 {
  int max=a[0],i;
  for(i=0;i<a.length;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
    
  }
  return max;
 }
 
 
 
 static int binary(int n)
 {
   int i,bin=0,n1;
    for(i=1;n!=0;i=i*10)
    {
      n1=n%2;
      bin=bin+n1*i;
      n=n/2;
    }
      return bin;
   }
   

 static  int sumOfDigits(int n)
   {
     int n1,sum=0;
    while(n>9)
    {
      while(n!=0)
      {
        n1=n%10;
        sum=sum+n1;
         n=n/10;
        
      }
      n=sum;    
    }
   return sum;
   }
   
  
  
  public static void main (String[] ar)
  {
    
  int i,n,j,temp,k=0;
  System.out.print("enter size of array");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  int [][]a=new int[n][n];
  int []b=new int[10];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    { 
    System.out.print("a["+i+"]"+"["+j+"]=");
    a[i][j]=m.nextInt();
    if(i<j)
    {
      temp=a[i][j];
      b[k++]=temp;
    }
  }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      System.out.print(a[i][j]+" ");
    }
    System.out.println();
  }
 // System.out.println(max(b));
  //System.out.println(binary(max(b)));
  int s=sumOfDigits(binary(max(b)));
  System.out.println(s);
  if(s%2!=0)
  {
   
    System.out.print("dimag pe jor  dalo");
  }
 else
{
  System.out.print("cool");
}
    
    
    
    
  }
  }
  
