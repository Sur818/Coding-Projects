package sampledata;
import java.util.*;
 class dsarray13
 { 
  public static void main(String [] ar)
  {
    int i,j,n,ans=0,sum,ind=0;
    System.out.println("enter size of array");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    int a[]=new int[n];
    for(i=0;i<n;i++)
    {
     System.out.print("a["+i+"]=");
     a[i]=m.nextInt();
    }
    for(i=0;i<n;i++)
    {
      sum=0;
     for(j=i;j<n;j++)
     {
       sum=sum+a[j];
       if(sum==0&&(j-i+1)>ans)
       {
         ind=i;
         ans=Math.max(ans,j-i+1);
       }
     }
    }
    System.out.println("largesrt subarray who's sum=0->"+ans);
    print(a,ans,ind);

   }
   public static void print(int a[],int ans,int ind)
   {
     int i,k=0;
     System.out.print("{");
     for(i=ind;k++<ans;i++)
     {
       System.out.print(a[i]+" ");
     }
     System.out.print("}");
   } 

  
}

