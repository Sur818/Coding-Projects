package sampledata;
import java.util.*;
class dsarray34 
{
  public static void main(String[] ar)
  {
  int i,j,n,k,sum;
  System.out.print("enter size if array:-");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  int []arr=new int[n];
  for(i=0;i<n;i++)
  {
    System.out.print("a["+i+"]=");
    arr[i]=m.nextInt();
    }
    System.out.println("enter requred length of subArray");
    k=m.nextInt();
    for(i=0;i<=n-k;i++)
    {
      sum=0;
      for(j=i;j<k+i;j++)
      {
        sum=sum+arr[j]; 
      }
      if(sum%(i+1)==0)
      {
        print(arr,i,k);
      }
      }
      }
      
      public static void print(int a[],int ind,int j)
      {
        
       int i,k=0;
       System.out.print("{");
       for(i=ind;k++<j;i++)
       {
         System.out.print(a[i]+" ");
       }
       System.out.println("}");
        
        
      }
      }
      
      
      
    
  
    
