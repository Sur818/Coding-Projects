package sampledata;
import java.util.*;
 class dsarray10
 {
   static
{
  
System.out.println("this program print subarray who's sum near to zero");
}
 public static void main(String[] ar)
 {
 int n,i,j,k,sum=0,ans1=0,ind1=0,ind2=0,ans,diff,p;
 Scanner m=new Scanner(System.in);
 System.out.print("enter size of array");
 n=m.nextInt();
 System.out.println("Enter target value");
 p=m.nextInt();
 int []a=new int[n];
 for(i=0;i<n;i++)
 {
   System.out.print("a["+i+"]=");
 a[i]=m.nextInt();
 }
 ans=p;
 for(i=0;i<n;i++)
 {
   sum=0;
   k=0;
   for(j=i;j<n;j++)
   {
     k++;
     sum=sum+a[j];
     diff=Math.abs(sum-p);
     if(diff<=ans&&(k)>ans1)
     {
       ind1=i;
       ind2=j;
      ans1=Math.max(ans1,k);
      System.out.println(ans1);
     }
    ans=Math.min(ans,diff);
   }
 }
 print(a,ind1,ind2);
}
public static void print(int a[],int index1,int index2)
{
  int i;
  System.out.print("{");
  for(i=index1;i<=index2;i++)
  {
    System.out.print(a[i]+" ");
 }
  System.out.print("}");
}
}
