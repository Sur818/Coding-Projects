package sampledata;
import java.util.*;


 class dsarray3 {

  public static void main(String[] args) 
  {
   
  int n,i,sum=0;
  Scanner sc=new Scanner(System.in);
  System.out.print("enter size of array");
  n=sc.nextInt();
  int a[]=new int[n];
  for(i=0;i<n;i++)
  {
    a[i]=sc.nextInt();
    sum=sum+a[i];
   
  }
  System.out.print("entered array are:-\n");
for(i=0;i<n;i++)
{
  System.out.print(a[i]+" ");
}
System.out.println("\nsum of element of array="+sum);
}
}

