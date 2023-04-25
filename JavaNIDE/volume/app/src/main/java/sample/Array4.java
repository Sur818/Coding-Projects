package sample;
import java.util.*;

 class Array4 
{
  static void arry(int a[],int n)
 {
 int i,j,f=0;
 System.out.println("aftre removal of duplication");
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
    if(a[i]!=a[j])
    {
     f=1;
     
    }
    else
   {
    f=0;
    break;
   }
  }
  if(f==1)
  {
    System.out.print(a[i]+"\t");
  }
 }
  
 }
  public static void main(String[] arr)
  {
    int i,n;
    Scanner m=new Scanner(System.in);
    System.out.println("enter size of array:");
    n=m.nextInt();
   int a[]=new int[n];
   for(i=0;i<n;i++)
   {
     System.out.println("a["+i+"]=");
     a[i]=m.nextInt();
     
   }
   arry(a,n);
   
    }
 
}
