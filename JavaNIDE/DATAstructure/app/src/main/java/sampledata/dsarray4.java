package sampledata;
import java.util.*;

 class dsarray4 
 {
  public static void main (String[] arg)
  {
 int n,i,p;
 Scanner m=new Scanner(System.in);
 System.out.print("enter size of array:-");
 n=m.nextInt();
 int a[]=new int[n];
 for(i=0;i<n;i++)
 {
   a[i]=m.nextInt();
 }
 for(i=0;i<n;i++)
 {
  System.out.print(a[i]+" ");
 }
System.out.print("\nenter element want to search:-");
  p=m.nextInt();
  for(i=0;i<n;i++)
  {
    if(a[i]==p)
    {
      System.out.println("element found at position"+(i+1));
      
    }
  }
}
}
