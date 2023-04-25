package sample;
import java.util.*;
class Array9
 {
private int i,sum=0;
float avg;

void Array(int a[],int n)
{
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 avg=(float)sum/n;
 System.out.println("avg of no is"+avg);
}

public static void main(String[] ar)
{
  int n,i;
  Scanner m=new Scanner(System.in);
  System.out.println("enter no");
  n=m.nextInt();
  int []a=new int[n];
  for(i=0;i<n;i++)
  {
    System.out.println("a["+i+"]=");
   a[i]=m.nextInt();
   }
   Array9 obj=new Array9();
   obj.Array(a,n);
  }
  
 
}
  
