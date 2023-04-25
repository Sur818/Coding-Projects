package sampledata;
import java.util.*;
class dsarray9 
{
  
public static void main (String[] ar)
{
 int n,i,j,sum=0,ind1=0,ind2=0,ans1=0,ans2=0,k=0;
 Scanner m=new Scanner(System.in);
 System.out.print("enter size of array");
 n=m.nextInt();
 int []a=new int[n];
 for(i=0;i<n;i++)
 {
   System.out.print("a["+i+"]=");
 a[i]=m.nextInt();
 }
 for(i=0;i<n;i++)
 {
   sum=0;
   k=0;
   for(j=i;j<n;j++)
  {
    k++;
 sum=sum+a[j];
 if(ans1<sum&&k>ans2)
 {
   ind1=i;
   ind2=j;
   ans1=Math.max(ans1,sum);
   ans2=Math.max(ans2,k);
   }

 }
 }
 System.out.print("sum="+ans1+"\n");
 print(a,ind1,ind2);
 }
  
public static void print(int a[],int index1,int index2)
{
  int i;
  for(i=index1;i<=index2;i++)
  {
    System.out.println(a[i]);
  }
}
  
  
  
}
  

