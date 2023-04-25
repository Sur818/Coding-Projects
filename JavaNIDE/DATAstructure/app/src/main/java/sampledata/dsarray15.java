package sampledata;
import java.util.*;
class dsarray15
{
  
public static void main(String [] ar)
{
int i,j,n,k;
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
     for(j=i;j<n;j++)
     {
       System.out.print("{");
       for(k=i;k<=j;k++)
       {
       System.out.print(a[k]+" ");
       }
     System.out.println("}");
     }
    }
}
}
