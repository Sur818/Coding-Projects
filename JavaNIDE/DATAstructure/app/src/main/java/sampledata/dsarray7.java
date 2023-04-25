package sampledata;
import java.util.*;
 class dsarray7
 {
  public static void main (String[] ar)
  {
    int i,j,n,e,temp=0,p;
    System.out.println("enter size of array");
    Scanner sc=new Scanner (System.in);
    n=sc.nextInt();
    int a[]=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.print("a["+i+"]=");
      a[i]=sc.nextInt();
    }
   System.out.print("how many no want to delete");
    p=sc.nextInt();
while(temp++<p)
{
 System.out.println("enter element want to delete");
 e=sc.nextInt();
 for(i=0;i<n;i++)
 {
   if(a[i]==e)
   {
     for(j=i;j<n-1;j++)
     {
       a[j]=a[j+1];
       
     }
     i--;
     n--;
   }
 }
print(a,n);
}
}


public static void print(int a[],int n)
{
  int i;
for(i=0;i<n;i++)
{
 System.out.println(a[i]);
} 
System.out.println("\n\n");
  }
  
}
