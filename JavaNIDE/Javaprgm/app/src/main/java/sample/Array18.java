package sample;
import java.util.*;
class Array18
{
  public static void main (String[] ar)
  {
   int i,j,count=0,n,z;
   System.out.print("enter size of array");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   int []a=new int[n];
   for(i=0;i<n;i++)
   {
     System.out.println("a["+i+"]=");
     a[i]=m.nextInt();
   }
   System.out.println("enter no");
   z=m.nextInt();
   for(i=0;i<n;i++)
   {
   for(j=i+1;j<n;j++)
   {
     if(a[i]+a[j]==z)
     { 
       count++;
       System.out.println(a[i]+"&"+a[j]);
     }
   }
     
   }
   if(count==0)
   {
     System.out.println("no pair are present");
   }
   }
 
  
}
