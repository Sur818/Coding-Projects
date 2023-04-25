package sample;
import java.util.*;
class Array19 
{
  public static void main(String[] ar)
  {
   
  int i,j,count=0,n,z,n1;
   System.out.print("enter size of array first array");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   int []a=new int[n];
   System.out.println("enter element in first array:=");
   for(i=0;i<n;i++)
   {
     System.out.print("a["+i+"]=");
     a[i]=m.nextInt();
   }
   System.out.print("enter size of second array");
  n1=m.nextInt();
   int []b=new int[n1];
   System.out.println("enter element in second array:=");
   for(i=0;i<n1;i++)
   {
     System.out.print("b["+i+"]=");
     b[i]=m.nextInt();
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<n1;j++)
     {
    if(a[i]==b[j])
    {
      System.out.println("common elements are="+a[i]);
    }
    }
   }
   
  
}
}
