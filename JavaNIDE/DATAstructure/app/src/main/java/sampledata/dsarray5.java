package sampledata;
import java.util.*;

class dsarray5
 {
public static void main (String[] ar)
{
 int i,j,n,m;
 System.out.println("enter size of array");
 Scanner sc=new Scanner(System.in);
 n=sc.nextInt();
 int arr[]=new int[n];
 for(i=0;i<n;i++)
 {
  System.out.print("arr["+i+"]=");
  arr[i]=sc.nextInt();
 }
 System.out.print("which element want to delete;-");
 m=sc.nextInt();
 for(i=0;i<n;i++)
 {
   if(arr[i]==m)
   {
     for(j=i;j<n-1;j++)
     {
       arr[j]=arr[j+1];
     }
     break;
   }
 }
 n--;
 System.out.println("after deleting element");
 for(i=0;i<n;i++)
 {
   System.out.println(arr[i]);
 }
 
  
  
}
}
