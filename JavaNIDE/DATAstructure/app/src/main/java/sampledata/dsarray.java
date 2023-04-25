package sampledata;
import java.util.*;


 class dsarray {

  public static void main(String[] args) 
  {
   
  int n,i;
  Scanner sc=new Scanner(System.in);
  System.out.println("enter size of array");
  n=sc.nextInt();
  int a[]=new int[n];
  for(i=0;i<n;i++)
  {
    a[i]=sc.nextInt();
   
  }
  System.out.print("entered array are:-\n");
for(i=0;i<n;i++)
{
  System.out.print(a[i]+" ");
}
}
}
