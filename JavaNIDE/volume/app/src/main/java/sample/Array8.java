package sample;
import java.util.Arrays;
import java.util.Scanner;

 class Array8 
{
   int a,b,c;
Array8()
{
  a=1;
  b=2;
 c=a+b;
 System.out.println("sum is"+c);
}

Array8(int n)
{
  int i,sum=0;
  System.out.println("one parameter constr is calling");
 for(i=1;i<=n;i++)
 {
   sum=sum+i;
 }
 System.out.println("sum of "+n+"natural no is"+sum);
}

Array8(int arr[],int n)
{
  System.out.println("sorting of array");
  int i;
  Arrays.sort(arr);
  for(i=0;i<n;i++)
  {
   System.out.println(arr[i]);
  }
  }
public static void main(String[] ar)
{
 int n;
 int arr[]={1,2,5,3,7,8};
 n=arr.length;
 Array8 s=new Array8();
 s.a=10;
 s.b=12;
 Array8 s1=new Array8();
 Array8 s2=new Array8(arr,n);
 Array8 s3=new Array8(10);
}
  
}
